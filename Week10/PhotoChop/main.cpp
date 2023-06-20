#include <iostream>
#include <algorithm>

#include "Image.h"
#include "ImageIOLib.h"

using std::max;
using std::min;

//-------------------------------------------------------------
// Custom Filters:

Image makeAqua();
Image makeGradient();
void redShift(Image& source, int shiftAmount);
void blur(Image& source);
void rotateRight(Image& source);

//-------------------------------------------------------------
// Helpers and Main:
/** @brief clamp Forces a value into range 0-255
 * @param value double value to clamp
 * @return 0 if value < 0, 255 if value > 255, value otherwise
 */
byte clamp(double value) {
  value = min(value, 255.0);
  value = max(value, 0.0);
  return static_cast<byte>(value);
}

int main() {
  // Make a new empty aqua collored image
  Image aqua = makeAqua();
  // Show the image in the GUI
  writeImage(aqua, "Aqua");

  // Do same for a black/white gradient
  Image gradient = makeGradient();
  writeImage(gradient, "Gradient");

  // Create an image struct from a file
  Image crabOriginal = readImage("crab.bmp");

  // Make a copy of the crab and make it more red:
  Image redCrab = crabOriginal;
  redShift(redCrab, 100);
  writeImage(redCrab, "Red");

  // Make a copy of the crab and blur it
  Image blurCrab = crabOriginal;
  blur(blurCrab);
  writeImage(blurCrab, "Blurred");

  // Rotate the blurred image
  rotateRight(blurCrab);
  writeImage(blurCrab, "Blur/Rotated");
}

//-------------------------------------------------------------
// Filter Implementation

/**
 * @brief makeAqua Make an image with pure aqua color
 * @return the created image
 */
Image makeAqua() {
  Image newImage = {};  // all black

  Pixel aqua = {0, 128, 255};  //(0 red, 128 green, 255 blue)

  for (int i = 0; i < IMG_HEIGHT; i++) {   // for each row
    for (int j = 0; j < IMG_WIDTH; j++) {  // for each column
      // Copy the aqua pixel over that one
      newImage.data[i][j] = aqua;
    }
  }
  return newImage;
}

/**
 * @brief makeGradient Make an image with black to white vertical gradient
 * @return the created image
 */
Image makeGradient() {
  Image newImage;  // all black

  for (int i = 0; i < IMG_HEIGHT; i++) {  // for each row
    // Set a gray value by making each color = to row * 2
    // That will start at 0,0,0 and grow up to 254,254,254
    byte grayValue = i * 2;
    Pixel gray = {grayValue, grayValue, grayValue};

    for (int j = 0; j < IMG_WIDTH; j++) {
      newImage.data[i][j] = gray;
    }
  }
  return newImage;
}

/**
 * @brief Add a specified amount to the red value for each pixel in an image
 * @param source Image to modify
 * @param shiftAmount Value to add to red. Negative value will subtract.
 *
 * Red amount is capped in range 0-255, will not "wrap" around.
 */
void redShift(Image& source, int shiftAmount) {
  for (int i = 0; i < IMG_HEIGHT; i++) {   // for each row
    for (int j = 0; j < IMG_WIDTH; j++) {  // for each column
      // Clamp function makes sure we don't go past 255 and wrap back around to
      // 0
      int resultValue = source.data[i][j].red + shiftAmount;
      source.data[i][j].red = clamp(resultValue);
    }
  }
}

/**
 * @brief Blurs an image
 * @param source image to modify
 *
 * Averages each pixel with its 4 neighbors to blur the image
 */
void blur(Image& source) {
  // Skip first and last row and column. Avoids reading outside of array when we
  //  are reading "neighboring" pixels
  for (int i = 1; i < IMG_HEIGHT - 1; i++) {  // for each row but first and last
    for (int j = 1; j < IMG_WIDTH - 1; j++) {  // for each column but first and last
      // get value of this and 4 neighbors
      Pixel currentPixel = source.data[i][j];
      Pixel abovePixel = source.data[i - 1][j];
      Pixel belowPixel = source.data[i + 1][j];
      Pixel leftPixel = source.data[i][j - 1];
      Pixel rightPixel = source.data[i][j + 1];

      // average each color value
      byte newRed = (currentPixel.red + abovePixel.red + belowPixel.red +
                     leftPixel.red + rightPixel.red) /
                    5;

      byte newGreen = (currentPixel.green + abovePixel.green +
                       belowPixel.green + leftPixel.green + rightPixel.green) /
                      5;

      byte newBlue = (currentPixel.blue + abovePixel.blue + belowPixel.blue +
                      leftPixel.blue + rightPixel.blue) /
                     5;

      // use averaged values in image
      Pixel newData = {newRed, newGreen, newBlue};
      source.data[i][j] = newData;
    }
  }
}

/**
 * @brief Rotate an image 90 degrees clockwise
 * @param Source Image to be rotated. This MUST be a square image.
 */
void rotateRight(Image& source) {
  // First make a temp image to rotate into - makes easier to avoid
  //  overwriting old work as we go.
  Image temp;
  for (int i = 0; i < IMG_HEIGHT; i++) {   // for each row
    for (int j = 0; j < IMG_WIDTH; j++) {  // for each column
      // calculate where i, j should rotate to
      int newRow = j;                    // new row = old column
      int newCol = (IMG_WIDTH - 1) - i;  // new column = last column - old row

      temp.data[newRow][newCol] = source.data[i][j];
    }
  }
  // Now copy temp image over the top of the source one to replace it
  source = temp;
}

#include <algorithm>
#include <iostream>

#include "Image.h"
#include "ImageIOLib.h"

using std::max;
using std::min;

//-------------------------------------------------------------
// Custom filter declarations

Image makeAqua();
Image makeGradient();
void redShift(Image& source, int shiftAmount);
void blur(Image& source);
void rotateRight(Image& source);

//-------------------------------------------------------------
// Helpers and main

/**
 * @brief Force a value into range 0-255
 * @param value desired pixel value, not necessarily in range
 * @return 0 if value < 0, 255 if value > 255, value otherwise
 */
byte clamp(int value)
{
  value = min(value, 255);
  value = max(value, 0);
  return static_cast<byte>(value);
}

int main()
{
  // Make a new aqua-colored image and save it
  Image aqua = makeAqua();
  writeImage(aqua, "Aqua.bmp");

  // Do same for a black/white gradient
  Image gradient = makeGradient();
  writeImage(gradient, "Gradient.bmp");

  // Read an Image struct from a file
  Image crabOriginal = readImage("crab.bmp");

  // Make a copy of the crab and make it more red
  Image redCrab = crabOriginal;
  redShift(redCrab, 100);
  writeImage(redCrab, "RedShifted.bmp");

  // Make a copy of the crab and blur it
  Image blurCrab = crabOriginal;
  blur(blurCrab);
  writeImage(blurCrab, "Blurred.bmp");

  // Rotate the blurred image and save the result in another file
  rotateRight(blurCrab);
  writeImage(blurCrab, "RotatedBlurred.bmp");
}

//-------------------------------------------------------------
// Filter implementations

/**
 * @brief Make an image with pure aqua color
 * @return the aqua image
 */
Image makeAqua()
{
  Image newImage = {}; // initialized to all black

  Pixel aqua = {0, 128, 255}; // no red, half green, max blue

  // nested loop for each pixel
  for (int i = 0; i < IMG_HEIGHT; i++) {  // rows top to bottom
    for (int j = 0; j < IMG_WIDTH; j++) { // columns right to left
      // copy the aqua pixel over this one
      newImage.data[i][j] = aqua;
    }
  }

  return newImage;
}

/**
 * @brief Make an image with black to white vertical gradient
 * @return the gradient image
 */
Image makeGradient()
{
  Image newImage; // uninitialized at first

  // for each row top to bottom
  for (int i = 0; i < IMG_HEIGHT; i++) {
    // choose a brightness equal to row * 2
    // grays will start at 0,0,0 and grow up to 254,254,254
    byte brightness = clamp(i * 2);
    Pixel gray = {brightness, brightness, brightness};

    // set each pixel across the row to the chosen color
    for (int j = 0; j < IMG_WIDTH; j++) {
      newImage.data[i][j] = gray;
    }
  }

  return newImage;
}

/**
 * @brief Add a specified amount to the red value for each pixel in an image
 * @param source Image to modify
 * @param shiftAmount Value to add to red. (Negative to reduce red.)
 *
 * Red amount is clamped in range 0-255, and will not "wrap" around.
 */
void redShift(Image& source, int shiftAmount)
{
  // for each pixel
  for (int i = 0; i < IMG_HEIGHT; i++) {
    for (int j = 0; j < IMG_WIDTH; j++) {
      // calculate a shifted red value, properly clamped
      byte newRed = clamp(source.data[i][j].red + shiftAmount);

      // save it over the red channel of this pixel
      source.data[i][j].red = newRed;
    }
  }
}

/**
 * @brief Blur an image
 * @param source image to modify
 *
 * Averages each pixel with its 4 neighbors to blur the image
 */
void blur(Image& source)
{
  // skip first and last row and column, so neighbors always exist
  for (int i = 1; i < IMG_HEIGHT - 1; i++) {
    for (int j = 1; j < IMG_WIDTH - 1; j++) {
      // get value of this and 4 neighbors in cardinal directions
      Pixel p = source.data[i][j];
      Pixel n = source.data[i - 1][j];
      Pixel s = source.data[i + 1][j];
      Pixel w = source.data[i][j - 1];
      Pixel e = source.data[i][j + 1];

      // average each color value
      byte avgR = clamp((p.red + n.red + s.red + w.red + e.red) / 5);
      byte avgG = clamp((p.green + n.green + s.green + w.green + e.green) / 5);
      byte avgB = clamp((p.blue + n.blue + s.blue + w.blue + e.blue) / 5);

      // use averaged values in image
      Pixel newData = {avgR, avgG, avgB};
      source.data[i][j] = newData;
    }
  }
}

/**
 * @brief Rotate an image 90 degrees clockwise.
 * @param source (square) image to be rotated
 */
void rotateRight(Image& source)
{
  // First make a temp image to rotate into, which makes it easier to avoid
  // overwriting old work as we go.
  Image temp;

  for (int i = 0; i < IMG_HEIGHT; i++) {
    for (int j = 0; j < IMG_WIDTH; j++) {
      // calculate where i, j should rotate to
      int newRow = j;                   // new row = old column
      int newCol = (IMG_WIDTH - 1) - i; // new column = last column - old row

      temp.data[newRow][newCol] = source.data[i][j];
    }
  }

  // Now copy temp image over the top of the source one to replace it
  source = temp;
}

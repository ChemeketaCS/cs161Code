#ifndef IMAGEIOLIB_H
#define IMAGEIOLIB_H

#include <string>
#include <QLayout>

#include "Image.h"


/**
 * @brief readImage Reads data from .bmp file on disk, loads into an Image struct
 *
 * @param fileName name of file to read
 * @return Image struct with data from file
 *
 * @warning File on disk must be of dimensions IMG_HEIGHT x IMG_WIDTH
 */
Image readImage(const std::string fileName);


/**
 * @brief displayImage Draws an image to an existing window
 *                      Also saves the image to a file
 * @param theImage image struct to draw
 * @param caption what text to display next to image - also used as filename
 */
void displayImage(const Image& theImage, std::string caption, QLayout& mainGrid);


#endif // IMAGEIOLIB_H

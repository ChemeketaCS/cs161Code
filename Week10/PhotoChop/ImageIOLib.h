#ifndef IMAGEIOLIB_H
#define IMAGEIOLIB_H

#include "Image.h"
#include <string>

/**
 * @brief readImage Reads data from .bmp file on disk, loads into an Image
 * struct
 * @param fileName name of file to read
 * @return Image struct with data from file
 *
 * @warning File on disk must be of dimensions IMG_HEIGHT x IMG_WIDTH
 */
Image readImage(const std::string& fileName);

/**
 * @brief writeImage saves the image to a file
 * @param theImage image struct to draw
 * @param fileName name to store as
 */
void writeImage(const Image& theImage, const std::string& fileName);

#endif // IMAGEIOLIB_H

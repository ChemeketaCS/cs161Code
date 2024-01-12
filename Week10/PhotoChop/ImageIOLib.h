#ifndef IMAGEIOLIB_H
#define IMAGEIOLIB_H

#include "Image.h"
#include <string>

/**
 * @brief Read an image file
 * @param fileName name of file to read
 * @return Image struct with data from file
 *
 * @warning File on disk must be of dimensions IMG_HEIGHT by IMG_WIDTH
 */
Image readImage(const std::string& fileName);

/**
 * @brief Save an image
 * @param theImage Image struct to save
 * @param fileName name of file to create/replace
 */
void writeImage(const Image& theImage, const std::string& fileName);

#endif // IMAGEIOLIB_H

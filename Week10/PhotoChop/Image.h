#ifndef MAIN_H
#define MAIN_H

//Declares constants and data types used by program
//No corresponding .cpp file as there are no functions to define

//A byte will store values from 0-255 (shorter name for "unsigned char")
typedef unsigned char byte;

/**
 * @brief The Pixel struct represents one dot in an image
 */
struct Pixel {
    byte red;
    byte green;
    byte blue;
};

//Size related constants
const int IMG_HEIGHT = 128;
const int IMG_WIDTH = 128;

/** @brief The Image struct wraps a 2D array of Pixels
 *
 *  Making a struct instead of a naked 2D array allows for easy
 *   copying
 */
struct Image {
    Pixel data[IMG_HEIGHT][IMG_WIDTH];
};


#endif // MAIN_H

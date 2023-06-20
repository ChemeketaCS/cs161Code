//Reference: https://en.wikipedia.org/wiki/BMP_file_format

#include "ImageIOLib.h"

#include <cassert>
#include <fstream>
#include <iostream>

using std::cout;
using std::endl;
using std::ifstream;
using std::ios;
using std::ofstream;
using std::string;

Image readImage(const string& fileName) {
  // Empty image we will return
  Image newImage;

  ifstream inFile;
  inFile.open(fileName, ios::binary);
  if (!inFile.is_open()) {
    cout << "File " << fileName << " not found." << endl;
    assert(0);  // force program to die
  }

  // Location of image data stored as int starting at byte 10
  inFile.seekg(10);
  int imgStartPosition = 0;
  inFile.read((char*)&imgStartPosition, sizeof(int));

  // Jump to that location
  inFile.seekg(imgStartPosition);

  // Every pixel is 3 bytes. Every row must be a multiple of 4 bytes.
  // Calculate needed padding to reach that.
  int extraBytes =
      (IMG_WIDTH * 3 % 4);  // how many bytes over multiple of 4 do we have
  int paddingBytes = extraBytes == 0 ? 0 : 4 - extraBytes;

  for (int row = IMG_HEIGHT - 1; row >= 0; row--) {
    for (int col = 0; col < IMG_WIDTH; col++) {
      // color order in file is BGR
      inFile.read((char*)(&newImage.data[row][col].blue), sizeof(byte));
      inFile.read((char*)(&newImage.data[row][col].green), sizeof(byte));
      inFile.read((char*)(&newImage.data[row][col].red), sizeof(byte));
    }
    // skip the padding bytes for this row
    inFile.seekg(paddingBytes, inFile.cur);
  }
  return newImage;
}

void writeImage(const Image& theImage, const string& fileName) {
  ofstream oFile;
  oFile.open(fileName, ios::binary);
  if (!oFile.is_open()) {
    cout << "File " << fileName << " not found." << endl;
    assert(0);  // force program to die
  }
  
  //Write magic bytes
  const char MAGIC_BYTES[2] = {'B', 'M'};
  oFile.write (MAGIC_BYTES, 2);

  //Write file size
  // Every pixel is 3 bytes. Every row must be a multiple of 4 bytes.
  int extraBytes =
      (IMG_WIDTH * 3 % 4);  // how many bytes over multiple of 4 do we have
  int paddingBytes = extraBytes == 0 ? 0 : 4 - extraBytes;
  uint32_t dataSize = IMG_HEIGHT * (IMG_WIDTH * 3 + paddingBytes);
  uint32_t fileSize = dataSize + 54; //54 bits of header
  oFile.write ((char*)&fileSize, sizeof (fileSize));   

  //Write Unused
  const uint32_t ZERO = 0;
  oFile.write ((char*)&ZERO, 4);

  //Write data offset
  const uint32_t OFFSET = 54;
  oFile.write ((char*)&OFFSET, 4);

  //Write header size
  const uint32_t HEAD_SIZE = 40;
  oFile.write ((char*)&HEAD_SIZE, 4);

  //Write dimensions
  oFile.write ((char*)&IMG_WIDTH, 4);
  oFile.write ((char*)&IMG_HEIGHT, 4);

  //Write planes
  const uint16_t NUM_PLANES = 1;
  oFile.write ((char*)&NUM_PLANES, 2);

  //Write BPP
  const uint16_t BITS_PER_PIXEL = 24;
  oFile.write ((char*)&BITS_PER_PIXEL, 2);
  
  //Write compression
  oFile.write ((char*)&ZERO, 4);
  
  //Write data size dummy
  oFile.write ((char*)&ZERO, 4);

  //Write print resolutions hor/vert
  oFile.write ((char*)&ZERO, 4);
  oFile.write ((char*)&ZERO, 4);

  //Palette options - not used
  oFile.write ((char*)&ZERO, 4);
  oFile.write ((char*)&ZERO, 4);

  for (int row = IMG_HEIGHT - 1; row >= 0; row--) {
    for (int col = 0; col < IMG_WIDTH; col++) {
      oFile.write ((char*)(&theImage.data[row][col].blue), 1);
      oFile.write ((char*)(&theImage.data[row][col].green), 1);
      oFile.write ((char*)(&theImage.data[row][col].red), 1);
      oFile.write ((char*)&ZERO, paddingBytes);
    }
  }
}

#include "ImageIOLib.h"

#include <iostream>
#include <fstream>
#include <cassert>

#include <QApplication>
#include <QLabel>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QVBoxLayout>


using namespace std;


Image readImage(const string fileName) {
    //Empty image we will return
    Image newImage;

    ifstream inFile;
    inFile.open(fileName.c_str(), ios::binary);
    if(!inFile.is_open()) {
        cout << "File " << fileName << " not found." << endl;
        assert(0);  //force program to die
    }

    //Location of image data stored as int starting at byte 10
    inFile.seekg(10);
    int imgStartPosition = 0;
    inFile.read((char*)&imgStartPosition, sizeof(int));

    //Jump to that location
    inFile.seekg(imgStartPosition);

    //Every pixel is 3 bytes. Every row must be a multiple of 4 bytes.
    //Calculate needed padding to reach that.
    int extraBytes = (IMG_WIDTH * 3 % 4);  //how many bytes over multiple of 4 do we have
    int paddingBytes = extraBytes == 0 ? 0 : 4 - extraBytes;


    for(int row = IMG_HEIGHT-1; row >= 0; row--) {
        for(int col = 0; col < IMG_WIDTH; col++) {
            //color order in file is BGR
            inFile.read((char*)(&newImage.data[row][col].blue), sizeof(byte));
            inFile.read((char*)(&newImage.data[row][col].green), sizeof(byte));
            inFile.read((char*)(&newImage.data[row][col].red), sizeof(byte));
        }
        //skip the padding bytes for this row
        inFile.seekg(paddingBytes, inFile.cur);
    }
    return newImage;
}




void displayImage(const Image& theImage, string caption, QLayout& mainGrid) {
    QFrame* myFrame = new QFrame;
    QVBoxLayout* layout = new QVBoxLayout;
    myFrame->setLayout(layout);

    //Make a QImage object using 24bit color model
    QImage myImage(QSize(IMG_WIDTH,IMG_HEIGHT),QImage::Format_RGB888);
    myImage.fill(0); //initialize array

    //Copy data from our image to the QImage
    memcpy(myImage.bits(),theImage.data,IMG_HEIGHT * IMG_WIDTH * 3);

    //Save the image just for fun
    string fName = "__image" + caption + ".bmp";
    myImage.save(fName.c_str());

    QLabel* myLabel = new QLabel;
    myLabel->setPixmap(QPixmap::fromImage(myImage));
    layout->addWidget(myLabel);

    QLabel* myLabel2 = new QLabel;
    myLabel2->setText(caption.c_str());
    layout->addWidget(myLabel2);

    mainGrid.addWidget(myFrame);
}



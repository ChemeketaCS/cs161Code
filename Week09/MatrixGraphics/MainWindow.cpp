#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QPainter>

#include <iostream>
#include <cmath>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




//---------------------------------------------------------------------------
//The 3x3 identity matrix
const double IDENTITY[3][3] =    {{1, 0, 0},
                                  {0, 1, 0},
                                  {0, 0, 1}};

//---------------------------------------------------------------------------
//Functions

/**
 * @brief Make destination be a copy of data in source
 * @param source Matrix to copy
 * @param destination Matrix to place copy in
 */
void copyMatrix(const double source[3][3], double destination[3][3]) {
    //copy 9 doubles worth of memory
    //from location of source to location of destination
    memcpy(destination, source, 9 * sizeof(double));
}

/**
 * @brief Multiplies the 3x3 matricies a and b and places answer in b
 * @param a left matrix
 * @param b right matrix - replaced by result
 *
 * (Note - order of a and b matters... matrix multiplication is not commutative)
 */
void multiplyInto(const double a[3][3], double b[3][3]) {
    double result[3][3]; //temp matrix to hold result while building answer
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 3; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    copyMatrix(result, b);
}

/**
 * @brief Write a matrix to the console for debugging
 * @param array Matrix to print
 */
void printMatrix(const double array[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}


/**
 * @brief Produces a 3x3 tranlation matrix for given amount of x and y
 * @param dx Distance to shift in x
 * @param dy Distance to shift in y
 * @param array Matrix to hold the translation matrix
 *
 * A translation matrix always looks like:
 * 1  0  dx
 * 0  1  dy
 * 0  0  1
 *
 */
void makeTranslation(double dx, double dy, double array[3][3]) {
    copyMatrix(IDENTITY, array);     //initialize to identity matrix
    //TODO - FIX ME
}


/**
 * @brief Make a 3x3 scale matrix for given number of degrees
 * @param xscale Multiplier for x coordinates
 * @param yscale Multiplier for y coordinates
 * @param array Matrix to hold the scale matrix
 *
 * A scale matrix always looks like:
 * xscale  0       0
 * 0       yscale  0
 * 0       0       1
 *
 */
void makeScale(double xscale, double yscale, double array[3][3]) {
    copyMatrix(IDENTITY, array);     //initialize to identity matrix
    //TODO - FIX ME
}


/**
 * @brief Make a 3x3 rotation matrix for given number of degrees
 * @param degrees Number of degrees clockwise to rotate
 * @param array Matrix to hold the rotation matrix
 *
 * A rotation matrix always looks like:
 * cosX  sinX  0
 * -sinX cosX  0
 * 0     0     1
 *
 * Where x is rotation angle
 *
 */
void makeRotation(double degrees, double array[3][3]) {
    copyMatrix(IDENTITY, array);     //initialize to identity matrix
    //TODO - FIX ME
    //Hint - don't forget that trig functions use radians...
}


//---------------------------------------------------------------------------
//"main" function that paints windows
void MainWindow::paintEvent(QPaintEvent* )
{
    //Temp matrices to hold results of doing multiplications
    double myTransform[3][3];
    copyMatrix(IDENTITY, myTransform);     //initialize to identity matrix


    //make a rotation
    double rotation1[3][3];
    makeRotation(30, rotation1);

    //apply to our tranformation - should spin text 30 degrees
    multiplyInto(rotation1, myTransform);



    //make a scale transform
    double scale1[3][3];
    makeScale(0.5, 5, scale1);

    //apply to our tranformation
    multiplyInto(scale1, myTransform);



    //translate by 125, 150 to move to center of screen
    double translate1[3][3];
    makeTranslation(125, 150, translate1);

    //apply translation1 to the identity matrix - should shift text to middle of box
    multiplyInto(translate1, myTransform);




    //Magic code to paint text using your transformation
    QPainter painter(this);
    painter.setMatrix(QMatrix(myTransform[0][0], myTransform[0][1],
                              myTransform[1][0], myTransform[1][1],
                              myTransform[0][2], myTransform[1][2]));

    painter.setFont(QFont("Helvetica", 24));
    painter.setPen(QPen(Qt::black, 1));
    painter.drawText(0, 0, "Hello World");
}

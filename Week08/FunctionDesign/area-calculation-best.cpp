#include <iostream>
#include <cmath>
#include <format>
#include <string>
using namespace std;

double getDoubleInput(const string& prompt) {
    cout << prompt;
    double value;
    cin >> value;
    cout << value << endl;  // echo the input
    return value;
}

double calculateTriangleArea(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;  // Semi-perimeter
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));  // Heron's formula
    return area;
}

int main() {
    double side1 = getDoubleInput("Enter the length of the first side of the triangle: ");
    double side2 = getDoubleInput("Enter the length of the second side of the triangle: ");
    double side3 = getDoubleInput("Enter the length of the third side of the triangle: ");

    double area = calculateTriangleArea(side1, side2, side3);

    cout << format("The area of the triangle to one decimal is: {:.1f}", area) << endl;
}

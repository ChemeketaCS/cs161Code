// global variables - BAD, BAD, BAD!!!!
double side1, side2, side3;
double area;


void calculateTriangleArea() {
    // I hope someone set these...
    double s = (side1 + side2 + side3) / 2;
    // We'll just put the answer in area and hope the caller knows to look for it
    area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    cout << "Enter the length of the first side of the triangle: ";
    cin >> side1;
    cout << side1 << endl; // echo the input
    cout << "Enter the length of the second side of the triangle: ";
    cin >> side2;
    cout << side2 << endl; // echo the input
    cout << "Enter the length of the third side of the triangle: ";
    cin >> side3;
    cout << side3 << endl; // echo the input

    calculateTriangleArea();

    cout << format("The area of the triangle to one decimal is: {:.1f}", area) << endl;
}
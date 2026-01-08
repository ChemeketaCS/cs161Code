void calculateTriangleArea() {
    double side1, side2, side3;
    cout << "Enter the length of the first side of the triangle: ";
    cin >> side1;
    cout << side1 << endl; // echo the input
    cout << "Enter the length of the second side of the triangle: ";
    cin >> side2;
    cout << side2 << endl; // echo the input
    cout << "Enter the length of the third side of the triangle: ";
    cin >> side3;
    cout << side3 << endl; // echo the input

    double s = (side1 + side2 + side3) / 2;  // Semi-perimeter
    double area = sqrt(s * (s - side1) * (s - side2) * (s - side3));  // Heron's formula

    cout << format("The area of the triangle to one decimal is: {:.1f}", area) << endl;
}

int main() {
    calculateTriangleArea();
}
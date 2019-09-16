//Give me the C++ version of the library
#include <cstdio>


int main() {

    printf("Enter two integers for x and y: ");
    int x, y;
    scanf("%d %d", &x, &y);

    printf("You entered coordinates (%d, %d)\n", x, y);


    printf("Give me a radius: ");
    double radius;
    scanf(" %lf", &radius);  //double MUST be lf in scanf, not f
    double area = radius * radius * 3.1416;
    printf("Area of your circle is: %.2lf\n", area);


//    printf("Enter phone number (xxx) xxx-xxxx : ");
//    int areaCode, prefix, number;
//    scanf(" (%d) %d-%d", &areaCode, &prefix, &number);

//    printf("Your number is %d.%d.%d\n", areaCode, prefix, number);


   return 0;
}

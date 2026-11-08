#include <stdio.h>
#include <math.h>

int main () {

    /*
    Calculate the area of a two-dimensional circle,
    And the surface area and volume of a sphere With Radius.
    */

    double radius = 0.0;
    double area = 0.0;
    double surFaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter The radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surFaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("The Area is: %.2lf\n", area);
    printf("The surFaceArea is: %.2lf\n", surFaceArea);
    printf("The Volume is: %lf\n", volume);

    

    return 0;
}
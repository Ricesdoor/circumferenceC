#include <stdio.h>

int main(){

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter de radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %.2lf", circumference);
    printf("\nArea: %.2lf", area);


    return 0;
}
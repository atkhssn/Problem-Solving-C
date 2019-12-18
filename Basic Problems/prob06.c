#include <stdio.h>
#include <math.h>
// Write a C program to enter radius of a circle and find its diameter, circumference and area

int main()
{
    int rad;

    float radius, diameter, circumference, area;

    printf("Enter a radius of It\'s circle: ");
    scanf("%d", &rad);

    radius = rad;

    diameter = 2 * radius;

    circumference = 2 * M_PI * radius;

    area =  M_PI * pow(radius, 2);

    printf("You entered radius %d cm of a circle.\n\nIt\'s Diameter is %.2f cm. \n\nIt\'s Circumference is %.2f cm. \n\nIt\'s area is %.2f cm sq.\n", rad, diameter, circumference, area);

    return 0;
}

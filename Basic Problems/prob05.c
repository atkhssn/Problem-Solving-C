#include <stdio.h>
#include <math.h>

// Write a C program to enter length and breadth of a rectangle and find its area and diagonal

int main()
{
    int length, breadth, area;

    float diagonal;

    printf("Enter a length of it\'s rectangle: ");
    scanf("%d", &length);

    printf("\nEnter a breadth of it\'s rectangle: ");
    scanf("%d", &breadth);

    area = length * breadth; // Law of rectangle's area

    diagonal = (float)sqrt(pow(breadth, 2) + pow(length, 2)); // Law of rectangle's diagonal

    printf("\nRectangle\'s length %d cm, breadth %d cm. \n\nAnd It's area is %d cm & diagonal %.2f cm\n", length, breadth, area, diagonal);

    return 0;
}

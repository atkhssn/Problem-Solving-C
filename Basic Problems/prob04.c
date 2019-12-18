#include <stdio.h>

// Write a C program to enter length and breadth of a rectangle and find its perimeter

int main(void)
{
    int length, breadth, perimeter;

    printf("Enter a length of it\'s rectangle:  ");
    scanf("%d", &length);

    printf("\nEnter a breadth of it\'s rectangle: ");
    scanf("%d", &breadth);

    perimeter = 2 * (length + breadth); // Law of rectangle's perimeter

    printf("\nRectangle's length: %d cm, breadth: %d cm. And it\'s perimeter is: %d cm.\n", length, breadth, perimeter);

    return 0;
}

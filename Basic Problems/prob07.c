#include <stdio.h>

// Write a C program to enter length in centimeter and convert it into meter and kilometer

int main()
{
    int cm;
    float centimeter, meter, kilometer;

    printf("Enter a length in Centimeter: ");
    scanf("%d", &cm);

    centimeter = cm;

    meter = centimeter / 100; // Law: Divide the length in cm value by 100

    kilometer = centimeter / 100000; // Law: Divide the length in cm value by 100000

    printf("\nYou entered %d Centimeter. It\'s meter value is %.2f m. & Kilometer value is %.2f km. \n", cm, meter, kilometer);

    return 0;
}

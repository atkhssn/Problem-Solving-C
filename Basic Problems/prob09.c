# include <stdio.h>

// Write a C program to enter temperature in Fahrenheit and convert to Celsius

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) *  5/9; // Fahrenheit to Celsius Formula : (F - 32) * 5/9

    printf("\nYou entered %.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}

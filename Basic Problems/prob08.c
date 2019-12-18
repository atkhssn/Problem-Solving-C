# include <stdio.h>

// Write a C program to enter temperature in Celsius and convert it into Fahrenheit

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * (9 / 5)) + 32; // Celsius to Fahrenheit Formula (C * 9/5) + 32

    printf("\nYou entered %.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

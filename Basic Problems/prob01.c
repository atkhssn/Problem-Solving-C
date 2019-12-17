#include <stdio.h>

// Write a C program to perform input/output of all basic data types.

// Signed data type means '-' value to '+' value
// Unsigned data type means just '+' value

int main(void)
{
    // Declaring all the variable name
    char ch; // Declare signed char variable
    unsigned char Uch; // Declare unsigned char variable

    short srtValue; // Declare signed short variable
    unsigned short UsrtValue; // Declare unsigned short variable

    int intValue; // Declare signed integer variable
    unsigned int UintValue; //Declare unsigned integer variable

    long longValue; // Declare signed long variable
    unsigned long UlongValue; // Declare unsigned long variable

    long long doubleLongValue; // Declare signed long long variable
    unsigned long long UdoubleLongValue; // Declare unsigned long long variable

    float floatValue; // Declare floating variable

    double doubleValue; // Declare double number variable

    long double longDoubleValue; // Declare long double number variable

    // I/O for all data type
    printf("Enter a signed character: \n");
    ch = getchar(); //Read signed character from user (ch for signed char data type)
    getchar(); //Dummy getchar() to capture 'enter'
    printf("You entered signed character %c! \n\n", ch);

    printf("Enter unsigned character: \n");
    Uch = getchar(); //Read unsigned character from user (ch for unsigned char data type also)
    getchar(); // Dummy getchar() to capture 'enter'
    printf("You entered a unsigned character %c! \n\n", Uch);

    printf("Enter signed sort value: \n");
    scanf("%hi", &srtValue); //Read signed short value from user (hi for signed short data type)
    printf("You entered a signed short value %hi! \n\n", srtValue);

    printf("Enter unsigned sort value: \n");
    scanf("%hu", &UsrtValue); //Read unsigned short value from user (hu for unsigned short data type)
    printf("You entered a unsigned short value %hu! \n\n", UsrtValue);

    printf("Enter signed integer value: \n");
    scanf("%d", &intValue); // Read signed integer value from user (d for signed int data type)
    printf("You entered a signed integer value %d! \n\n", intValue);

    printf("Enter unsigned integer value: \n");
    scanf("%lu", &UintValue); // Read unsigned integer value from user (lu for unsigned int data type)
    printf("You entered a unsigned integer value %lu \n\n", UintValue);

    printf("Enter signed long value: \n");
    scanf("%ld", &longValue); // Read signed long value from user (ld for signed long data type)
    printf("You entered a signed long value %ld \n\n", longValue);

    printf("Enter unsigned long value: \n");
    scanf("%lu", &UlongValue); // Read unsigned long value from user (lu for unsigned long data type)
    printf("You entered a unsigned long value %lu \n\n", UlongValue);

    printf("Enter singed long long value: \n");
    scanf("%lld", &doubleLongValue); // Read signed long long value from user (lld for signed long long data type)
    printf("You entered singed long long value %lld \n\n", doubleLongValue);

    printf("Enter unsigned long long value: \n");
    scanf("%llu", &UdoubleLongValue); // Read unsigned long long value form user (llu for unsigned long long data type)
    printf("You entered unsigned long long value %llu \n\n", UdoubleLongValue);

    printf("Enter floating value: \n");
    scanf("%f", &floatValue); // Read float value from user (f for floating data type)
    printf("You entered floating value %f \n\n", floatValue);

    printf("Enter double number value: \n");
    scanf("%lf", &doubleValue); // Read double number value from user (lf for double number data type)
    printf("You entered double number value %lf \n\n", doubleValue);

    printf("Enter long double number value: \n");
    scanf("%Lf", &longDoubleValue); // Read long double number value form user (Lf for double number data type)
    printf("You entered long double number value %Lf \n\n", longDoubleValue);

    return 0;
}

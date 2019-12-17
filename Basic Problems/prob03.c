#include <stdio.h>

// Write a C program to enter two numbers and perform all arithmetic operations

int main()
{
    int num1, num2, add, sub, mul, mod;

    float num3, num4, div;

    printf("Enter any two numbers: \n");
    scanf("%d%d", &num1, &num2);

    add = num1 + num2;

    sub = num1 - num2;

    mul = num1 * num2;

    num3 = num1; // Data type Casting

    num4 = num2; // Data type Casting

    div = num3 / num4;

    mod = num1 % num2;

    printf("You entered %d & %d, And Addition is %d \n\n", num1, num2, add);

    printf("You entered %d & %d, And Subtraction is %d \n\n", num1, num2, sub);

    printf("You entered %d & %d, And Multiplication is %d \n\n", num1, num2, mul);

    printf("You entered %d & %d, And Division is %.2f \n\n", num1, num2, div);

    printf("You entered %d & %d, And Modulation is %d \n\n", num1, num2, mod);

    return 0;
}

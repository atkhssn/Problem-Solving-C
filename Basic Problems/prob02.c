#include <stdio.h>

// Write a C program to enter two numbers and find their sum

int main()
{
    int num1, num2, sum;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("\nYou entered %d & %d, And sum is %d \n", num1, num2, sum);

    return 0;
}

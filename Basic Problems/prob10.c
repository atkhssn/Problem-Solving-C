#include <stdio.h>

// Write a C program to convert days into years, weeks and days

int main()
{
    int tDays, year, month, week, day;

    printf("Enter total days: ");
    scanf("%d", &tDays);

    year =  tDays / 365;

    month = (tDays % 365) / 30;

    week = ((tDays % 365) % 30) / 7;

    day = ((tDays % 365) % 30) % 7;

    printf("\nYou entered %d Days. Years = %d, Months = %d, Weeks = %d & Days = %d \n", tDays, year, month, week, day);

    return 0;
}

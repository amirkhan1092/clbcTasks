/*
*   Created By Divyansh Bhardwaj, 06 September 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To check whether a given year is leap year
*/
#include<stdio.h>
int main()
{
    int year;
    printf("\t---Program to check whether a given year is leap year---\t\n");
    printf("Enter the year.\n");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

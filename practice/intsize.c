/*
*   Created By Divyansh Bhardwaj, 28 August 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To showcase the maximum value alowed in an integer variable
*/
#include<stdio.h>
void main()
{
    long int n = 0;
    printf("The current value of n is %d : \n", n);
    printf("Enter a new value for n\n");
    scanf("%ld", &n);
    printf("The new value of n is : %ld\n", n);
    printf("The sizeof int is %d bytes\n", sizeof(n));
}
// the value of int on my system seems to be of 11 digits
// the value corresponds to 2^32 for 32 the bit GCC compiler and amounts to 4294967296

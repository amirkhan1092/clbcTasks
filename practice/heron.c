/*
*   Author          :           Divyansh Bhardwaj
*   Compiled On     :           Ubuntu 18.04 LTS 64 Bit with Code::Blocks IDE 16.01 on GCC Compiler 7.3.0
*   Aim             :           To calculate the area of a triangle using Heron's Formula
*/
#include<stdio.h>
int main()
{
    float s, a, b, c, res = 0.0f;
    printf("\t---Program to calculate area of triangle using Heron's Formula---\t\n");
    printf("Enter the value of a:\n");
    scanf("%f", &a);
    printf("Enter the value of b:\n");
    scanf("%f", &b);
    printf("Enter the value of c:\n");
    scanf("%f", &c);
    printf("\nUsing formula s = (a + b + c) / 2.0f; \n");
    s = (a + b + c) / 2.0f;
    printf("The calculated value of s is %.2f\n", s);
    printf("\t---\t---\t---\t");
    res = s * (s - a) * (s - b) * (s - c);
    res = sqrt(res);
    printf("\nUsing formula res = s * (s - a) * (s - b) * (s - c); \nres = sqrt(res);\n");
    printf("The calculated area of triangle using Heron's Formula is %.2f\n", res);
    return 0;
}

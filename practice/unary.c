/*
*   Created By Divyansh Bhardwaj, 29 August 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To demonstrate the use of Unary Operators
*/
#include<stdio.h>
int main()
{
    int n = 0;
    printf("The value of n is currently %d\n", n);
    printf("Please enter the value of n\n");
    scanf("%d", &n);

    printf("\t---\t---\t---\t\n");

    printf("ok, the value of n is now %d\n", n);
    printf("Now, we will print the value of n++ = %d\n", n++);
    printf("The n variable will give its value to the printf and then the ++ operator will be evaluated\n");
    printf("Due to the n++ in the above statement, the value of n is now %d\n", n);
    printf("Now, we will print the value of ++n = %d\n", ++n);
    printf("Due to the ++n in the above statement, the value of n is now %d\n", n);
    printf("First the ++ operator will be evaluated, the value of n will be incremented and the value will printed\n");

    printf("\t---\t---\t---\t\n");

    printf("ok, the value of n is now %d\n", n);
    printf("Now, we will print the value of n-- = %d\n", n--);
    printf("The n variable will give its value to the printf and then the -- operator will be evaluated\n");
    printf("Due to the n-- in the above statement, the value of n is now %d\n", n);
    printf("Now, we will print the value of --n = %d\n", --n);
    printf("Due to the --n in the above statement, the value of n is now %d\n", n);
    printf("First the -- operator will be evaluated, the value of n will be decremented and the value will printed\n");

    printf("\t---\t---\t---\t\n");

    return 0;
}

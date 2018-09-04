/*
*   Created By Divyansh Bhardwaj, 29 August 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To demonstrate the ASCII Table
*/
#include<stdio.h>
int main()
{
    for(int i = 0 ; i < 127 ; i++)
    {
        printf("The integer ASCII value is %d and the character is %c\n", i, i);
    }
    return 0;
}

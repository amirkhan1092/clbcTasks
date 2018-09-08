/*
*   Created By Divyansh Bhardwaj, 08 September 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To demonstrate the solution of the problem ++a + a++
*/
#include<stdio.h>
int main()
{
    int a = 0, b, c;
    printf("\t---\t---\t---\t\n");
    printf("The value of a is currently %d\n", a);
    printf("\t---\t---\t---\t\n");
    printf("If we perform the operation a++\nthen the value printed by printf is %d\n", a++);
    printf("but the actual value of a is %d\n", a);
    a = 0;
    printf("We have again changed the value of variable a to %d\n", a);
    printf("\t---\t---\t---\t\n");
    printf("The value of a is currently %d\n", a);
    printf("\t---\t---\t---\t\n");
    printf("If we perform the operation ++a\nthen the value printed by printf is %d\n", ++a);
    printf("but the actual value of a is %d\n", a);
    a = 0;
    printf("We have again changed the value of variable a to %d\n", a);
    printf("\t---\t---\t---\t\n");
    a = 9;
    printf("The value of a is currently %d\n", a);
    printf("applying a++ + ++a = %d\n", (a++ + ++a));
    a= 9;
    printf("The value of a is currently %d\n", a);
    printf("applying ++a + a++ = %d\n", (++a + a++));
    return 0;
}

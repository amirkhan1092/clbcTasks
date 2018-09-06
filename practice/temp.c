/*
*   Author      :       CodeChef
*   Modified By :       Divyansh Bhardwaj, 28 August 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To create a menu driven program for temperature conversion
*/
#include<stdio.h>
int main()
{
    int choice;
    float c, f, fahrenheit, celsius, s, r;
    printf("\t---\tProgram for conversion of temperature\t---\t\n");
    printf("\nPress\n1 to convert Celcius to Fahrenheit\n2 to convert Fahrenheit to Celsius\n");
    printf("3 to convert Celsius to Kelvin\n4 to convert Kelvin to Celsius\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("You have chosen %d \n", choice);
        printf("Enter the temperature in Celsius ex: 33.00\n");
        scanf("%f", &c);
        printf("Temperature in Celsius is %3.3f *C\n", c);
        fahrenheit = ((9.0f * c) / 5.0f) + 32.0f;
        printf("The equivalent temperature is %3.3f *F", fahrenheit);
        return 0;   // this forecefully exits the program
    }
    if (choice == 2)
    {
        printf("You have chosen %d\n", choice);
        printf("Enter the temperature in Fahrenheit ex:33.00\n");
        scanf("%f", &f);
        printf("Temperature in Fahrenheit is %3.3f\n", f);
        celsius = (f - 32.0f) / ( 9.0f / 5.0f);
        printf("The equivalent temperature is %3.3f *C", celsius);
        return 1;
    }
    if (choice == 3)
    {
        printf("You have chosen %d\n", choice);
        printf("Enter the temp in Celsius\n");
        scanf("%f", &c);
        printf("Temperature in Celsius is %3.3f *C\n",c);
        s = c + 273.0f;
        printf("The equivalent temperature is %3.3f *K", s);
        return 2;
    }
    if (choice == 4)
    {
        printf("You have chosen %d\n", choice);
        printf("Enter the temperature in Kelvin\n");
        scanf("%f", &s);
        printf("The temperature in Kelvin is %3.3f *K\n", s);
        celsius=s-273;
        printf("The equivalent temperature in Celsius is %3.3f *C", celsius);
        return 3;
    }
    if ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4))
    {
        printf("\tWrong selection, please select from the given options!\n");
        //    getch();
    }
    return 0;
}

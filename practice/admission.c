/*
*   Created By Divyansh Bhardwaj, 28 August 2018
*   Language Standard : C11
*   Compiled On : Ubuntu 18.04 LTS 64 Bit, Code::Blocks IDE 16.01 with GCC Compiler 7.3.0
*   Objective : To create an admission form for a university. Take input from the user and then print it.
*/
#include<stdio.h>
#define NAMESIZE 20
#define ADDRESSSIZE 100
void main()
{
    char studentFirstName[NAMESIZE], studentLastName[NAMESIZE];
    char fathersName[NAMESIZE], mothersName[NAMESIZE];
    char cAddress[ADDRESSSIZE], pAddress[ADDRESSSIZE];
    long int selfPhoneNumber;
    long int fathersPhoneNumber;
    long int mothersPhoneNumber;
    char gender;
    float pcmPercentage, percentage12;

    // print a welcome message for the user
    printf("\t---\tWelcome to the GLA University Admission Software\t---\t\n");

    // start by taking the student's name
    printf("Enter your first name. (Max 20 characters).\n");
    // fgets(studentFirstName, NAMESIZE, stdin);
    // the fgets method keeps the last newline character intact and thus causes a problem
    scanf("%[^\n]%*c", &studentFirstName);
    printf("Enter your last name. (Max 20 characters)\n");
    scanf("%[^\n]%*c", &studentLastName);
    // fgets(studentLastName, NAMESIZE, stdin);

    printf("Enter your father's name. (Max 40 characters, without Mr.)\n");
    scanf("%[^\n]%*c", &fathersName);

    printf("Enter your mother's name. (Max 40 characters, without Mrs.)\n");
    scanf("%[^\n]%*c", &mothersName);

    printf("Enter Correspondence Address. (Max 100 characters)\n");
    scanf("%[^\n]%*c", &cAddress);

    printf("Enter Permanent Address. (Max 100 characters)\n");
    scanf("%[^\n]%*c", &pAddress);

    printf("Enter your phone number(without +91)\n");
    scanf("%ld", &selfPhoneNumber);

    // the program might skip the input for this character.
    // this happens because after you input the previous string, you pressed enter, didn't you?
    // remember, the \n or newline or enter, is also a character, hence that value was stored in
    // this character variable and therefore you were not able to take input for this variable
    // to remove this error, just use a space [' '] before the %c in scanf
    printf("Enter your gender. (M for male or F for female).\n");
    scanf(" %c", &gender);  //  note that there is a space here, before the %c

    printf("Enter your PCM Percentage. (Without %)");
    scanf("%f", &pcmPercentage);

    printf("Enter 12th Percentage. (Without %)\n");
    scanf("%f", percentage12);

    // print the values in a proper manner
    printf("\n\nHello, %s. Here are your form details.\n", studentFirstName);
    printf("---\t---\t---\t\n");
    printf("Name : %s %s\n", studentFirstName, studentLastName);
    //printf("Last Name : %s\n", studentLastName);
    printf("Father's Name : %s\n", fathersName);
    printf("Mother's Name : %s\n", mothersName);
    printf("Correspondence Address\n---\n%s\n---\n", cAddress);
    printf("Permanent Address\n---\n%s\n---\n", pAddress);
    printf("Contact Number : %ld\n", selfPhoneNumber);
    printf("Gender : %c\n", gender);
    printf("PCM Percentage : %3.2f%%\n", pcmPercentage);
    printf("12th Percentage : %3.2f%%\n", percentage12);
}














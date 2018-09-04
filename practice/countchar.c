/*
*   Author              :   Divyansh Bhardwaj, Techinal Trainer
*   Language Standard   :   C11
*   Compiled On         :   Ubuntu 18.04 LTS 64 Bit with GCC 7.3.0 on Code::Blocks IDE 16.01
*   Aim                 :   To scan some characters, output them as is and count the number of characters.
*/
#include<stdio.h>
int main()
{
    char c[100];    // taking a char array of size 100 for char input
    int i = 0;      // taking an int variable to keep count of characters and for looping
    printf("Enter some characters\n");
    scanf("%[^\n]%*c", &c);     //  taking input in char array ignoring '\n'
    for (i ; i <= 100 ; i++)    //  looping for every index of char array
    {
        if (c[i] != '\0')       //  checking if the char at any index (i) is '\0'
        {
            putchar(c[i]);      // printing the char at index i
        }
        else                    //  this condition works only if the char at index i is '\0'
        {
            break;              // break out of the loop
        }
    }
    printf("\nThe number of characters is : %d", i);    // finally print out the number of characters in the char array
    return 0;
}

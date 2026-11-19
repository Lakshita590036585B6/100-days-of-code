//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;

    fgets(str, sizeof(str), stdin);

    // First character uppercase
    if (str[0] >= 'a' && str[0] <= 'z')
    {
        str[0] = str[0] - 32;
    }

    // Capitalize first letter after every space
    while (str[i] != '\0')
    {
        if (str[i] == ' ' &&
            str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            str[i + 1] = str[i + 1] - 32;
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
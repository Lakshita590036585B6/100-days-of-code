//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;



    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == ' ')
        {
            str[i] = '-';
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
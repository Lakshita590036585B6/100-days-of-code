//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int first = 1;

    scanf("%s", str);

    // Find length
    while (str[length] != '\0')
    {
        length++;
    }

    // Generate all substrings
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            if (!first)
                printf(",");

            for (int k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    return 0;
}
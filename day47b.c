//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
#include <stdio.h>

int main()
{
    char str[200];
    int i = 0;
    int start = 0, length = 0;
    int maxStart = 0, maxLength = 0;


    while (1)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            length = i - start;

            if (length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            if (str[i] == '\0' || str[i] == '\n')
                break;

            start = i + 1;
        }

        i++;
    }

    // Print longest word
    for (i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
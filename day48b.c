//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start, end;


    while (str[i] != '\0')
    {
        start = i;

        // Find end of current word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        // Print current word in reverse
        for (int j = end; j >= start; j--)
        {
            printf("%c", str[j]);
        }

        // Print space
        if (str[i] == ' ')
        {
            printf(" ");
            i++;
        }
        else
        {
            break;
        }
    }

    return 0;
}
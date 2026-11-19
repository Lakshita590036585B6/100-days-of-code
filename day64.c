//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>

int main()
{
    char s[100];
    int maxLength = 0;

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        int seen[256] = {0};
        int length = 0;

        for (int j = i; s[j] != '\0'; j++)
        {
            if (seen[(unsigned char)s[j]] == 1)
            {
                break;
            }

            seen[(unsigned char)s[j]] = 1;
            length++;

            if (length > maxLength)
            {
                maxLength = length;
            }
        }
    }

    printf("%d", maxLength);

    return 0;
}
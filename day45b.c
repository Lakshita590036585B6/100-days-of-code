//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;


    while (str[i] != '\0' && str[i] != '\n')
    {
        // Lowercase to uppercase
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }

        // Uppercase to lowercase
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }

    printf("%s", str);

    return 0;
}
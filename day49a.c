//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>

int main()
{
    char name[100];
    int i = 0;


    // First initial
    if (name[0] != ' ' && name[0] != '\n')
    {
        printf("%c.", name[0]);
    }

    // Initial after every space
    while (name[i] != '\0' && name[i] != '\n')
    {
        if (name[i] == ' ' && name[i + 1] != ' ' &&
            name[i + 1] != '\0' && name[i + 1] != '\n')
        {
            printf("%c.", name[i + 1]);
        }

        i++;
    }

    return 0;
}
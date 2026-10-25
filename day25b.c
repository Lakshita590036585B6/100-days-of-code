//Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
ample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 5; i++)
    {
        // Print spaces
        for(j = 0; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = i; j < 5; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

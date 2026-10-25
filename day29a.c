//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main()
{
    int a[100], n, i, sum = 0;

    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Find sum of array elements
    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    printf("%d", sum);

    return 0;
}
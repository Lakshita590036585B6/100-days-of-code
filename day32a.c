//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i;

    // Read first array
    scanf("%d", &n1);

    for(i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    // Read second array
    scanf("%d", &n2);

    for(i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
        c[n1 + i] = b[i];
    }

    // Print merged array
    for(i = 0; i < n1 + n2; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
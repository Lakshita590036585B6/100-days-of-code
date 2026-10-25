//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>

int main()
{
    int a[100], n, i;
    int largest, second;

    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    largest = a[0];
    second = a[0];

    // Find largest element
    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            largest = a[i];
        }
    }

    // Find second largest element
    for(i = 0; i < n; i++)
    {
        if(a[i] != largest)
        {
            if(second == largest || a[i] > second)
            {
                second = a[i];
            }
        }
    }

    printf("%d", second);

    return 0;
}
//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int a[100], n, i, key;
    int low, high, mid, index = -1;

    scanf("%d", &n);

    // Read sorted array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Read element to search
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            index = mid;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(index != -1)
    {
        printf("Found at index %d", index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}
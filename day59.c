//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main()
{
    int n, k;
    int arr[100];

    scanf("%d", &n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    int maxSum = 0;

    // Sum of first subarray of size k
    for (int i = 0; i < k; i++)
    {
        maxSum += arr[i];
    }

    // Check remaining subarrays
    for (int i = 1; i <= n - k; i++)
    {
        int sum = 0;

        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }

        if (sum > maxSum)
        {
            maxSum = sum;
        }
    }

    printf("%d", maxSum);

    return 0;
}
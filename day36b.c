//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix and calculate sum
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}
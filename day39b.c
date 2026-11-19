//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[100][100];
    int sum = 0;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of main diagonal elements
    for (int i = 0; i < rows; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}
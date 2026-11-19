//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[100][100];

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonals starting from first row
    for (int start = 0; start < cols; start++)
    {
        int i = 0;
        int j = start;

        while (i < rows && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    // Diagonals starting from last column
    for (int start = 1; start < rows; start++)
    {
        int i = start;
        int j = cols - 1;

        while (i < rows && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }

    return 0;
}
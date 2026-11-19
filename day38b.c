//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <stdio.h>

int main()
{
    int rows, cols;
    int a[100][100];
    int symmetric = 1;

    scanf("%d %d", &rows, &cols);

    // Input matrix
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Symmetric matrix must be square
    if (rows != cols)
    {
        printf("False");
        return 0;
    }

    // Check symmetry
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if (symmetric == 0)
            break;
    }

    if (symmetric == 1)
        printf("True");
    else
        printf("False");

    return 0;
}
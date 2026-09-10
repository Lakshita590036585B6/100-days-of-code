//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}
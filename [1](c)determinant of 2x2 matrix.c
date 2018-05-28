#include<stdio.h>

int main()
{
    int a11, a12, a21, a22, det;
    printf("Enter your 2x2 matrix:\n");
    scanf("%d %d", &a11, &a12);
    scanf("%d %d", &a21, &a22);

    det = a11*a22 - a21*a12;

    printf("Determinant of given matrix is: %d\n", det);

    return 0;
}

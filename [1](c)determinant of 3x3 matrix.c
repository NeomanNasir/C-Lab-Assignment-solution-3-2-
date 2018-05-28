#include<stdio.h>

int main()
{
    int a11, a12, a13, a21, a22, a23, a31, a32, a33, det;
    printf("Enter your 3x3 matrix:\n");
    scanf("%d %d %d", &a11, &a12, &a13);
    scanf("%d %d %d", &a21, &a22, &a23);
    scanf("%d %d %d", &a31, &a32, &a33);

    det = a11*(a22*a33-a32*a23) - a12*(a21*a33-a31*a23) + a13*(a21*a32-a31*a22);
    printf("Determinant of given matrix is: %d\n", det);

    return 0;
}


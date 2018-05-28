#include<stdio.h>
///storing sum and multiplication of a and b in file1.txt
int main()
{
    FILE *fp;
    char *filename = "file1.txt";

    fp = fopen(filename, "w");

    int a, b, sum, mul;
    printf("Enter a and b:\n");
    scanf("%d %d", &a, &b);

    printf("\nFor sum and multiplication, check file1.txt file.\n ");
    fprintf(fp, "%d\n", a+b);
    fprintf(fp, "%d\n", a*b);

    fclose(fp);
    return 0;
}


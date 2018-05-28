#include<stdio.h>

int main()
{
    FILE *fp;
    char *filename = "file1.txt"; ///this file must contain your program folder
    int a, b;

    fp = fopen(filename, "r"); ///reading from the file
    fscanf(fp, "%d", &a);
    fscanf(fp, "%d", &b);

    printf("we get from the file:\n\n");
    printf("%d %d\n", a, b);

    fclose(fp);
    return 0;
}


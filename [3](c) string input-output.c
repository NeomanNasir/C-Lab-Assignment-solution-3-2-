#include<stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    printf("\nGiven string is: %s", str);

    return 0;
}



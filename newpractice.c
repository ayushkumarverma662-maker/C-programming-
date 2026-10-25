#include<stdio.h>

void display(char ch)
{
    if (ch == 'C' || ch == 'c')
    {
        printf("Computer");
    }
    else if (ch == 'M' || ch == 'm')
    {
        printf("Mobile");
    }
    else
    {
        printf("INVALID CODE");
    }
}

int main()
{
    char ch;

    printf("Enter the code");
    scanf("%d", &ch);

    display (ch);

    return 0;
}
/*

#include <stdio.h>

void display(char ch)
{
    if (ch == 'C' || ch == 'c')
    {
        printf("Computer");
    }
    else if (ch == 'M' || ch == 'm')
    {
        printf("Mobile");
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char ch;

    printf("Enter C or M: ");
    scanf(" %c", &ch);

    display(ch);

    return 0;
}
*/
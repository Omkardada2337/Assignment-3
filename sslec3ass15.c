// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    if (i > 0)
    {
        printf("%d is positive number", i);
    }
    else if (i < 0)
    {
        printf("%d is negative number", i);
    }
    else
    {
        printf("%d is zero",i);
    }

    getch();
    return 0;
}
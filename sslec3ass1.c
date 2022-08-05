// 1. Write a program to check whether a given number is positive or non-positive.
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
        printf("%d is Positive number", i);
    }
    else
    {
        printf("%d is the non-positive number", i);
    }

    getch();
    return 0;
}
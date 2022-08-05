// 2. Write a program to check whether a given number is divisible by 5 or not
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    if (i % 5 == 0)
    {
        printf("%d NUMBER is divisible 5", i);
    }
    else
    {
        printf("%d NUMBER is not divisible 5", i);
    }

    getch();
    return 0;
}
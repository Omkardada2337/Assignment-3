// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    if (i % 2 == 0 && i % 3 == 0)
    {
        printf("%d is divisible 2 and 3", i);
    }
    else
    {
        printf("%d is not divisible by 2 and 3",i);
    }

    getch();
    return 0;
}
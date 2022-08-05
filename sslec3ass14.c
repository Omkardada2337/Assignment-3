// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    if (i % 7 == 0 || i % 3 == 0)
    {
        printf("%d is divisible by 7 or 3", i);
    }
    else
    {
        printf("%d is not divisible by 7 or 3",i);
    }

    getch();
    return 0;
}
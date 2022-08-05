// 5. Write a program to check whether a given number is a three-digit number or not
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, count = 0;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    while (i != 0)
    {
        i = i / 10;
        count++;
    }
    if (count == 3)
    {
        printf("Yes it is three digit number");
    }
    else
    {
        printf("No it is not a three digit number");
    }

    getch();
    return 0;
}
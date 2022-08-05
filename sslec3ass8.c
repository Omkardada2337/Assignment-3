// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int y;
    system("cls");

    printf("Enter the year : ");
    scanf("%d", &y);

    if (y % 100 == 0)
    {
        if (y % 400 == 0)
        {
            printf("%d is the LEAP year", y);
        }
        else
        {
            printf("%d is NOT A LEAP year", y);
        }
    }
    else
    {
        if (y % 4 == 0)

        {
            printf("%d is the LEAP year", y);
        }
        else
        {
            printf("%d is NOT A LEAP year", y);
        }
    }

    getch();
    return 0;
}
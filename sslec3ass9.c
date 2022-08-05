// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    system("cls");

    printf("Enter the three numbers :");
    scanf("%d%d%d", &a, &b, &c);
    if (a >= b)
    {
        if (a >= c)
        {
            printf("%d is the greatest number", a);
        }
        else
        {
            printf("%d is the greatest number", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("%d is the greatest number", b);
        }
        else
        {
            printf("%d is the greatest number", c);
        }
    }

    getch();
    return 0;
}
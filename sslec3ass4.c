// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    j = i & 1;
    if (j == 1)
    {
        printf("%d is odd number", i);
    }

    else
    {
        printf("%d is even number", i);
    }

    getch();
    return 0;
}
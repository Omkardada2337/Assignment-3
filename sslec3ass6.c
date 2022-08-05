// 6. Write a program to print greater between two numbers. Print one number of both are
// the same
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    system("cls");

    printf("Enter two number : ");
    scanf("%d%d", &i, &j);

    if (i >= j)
        printf("%d is the greater number", i);

    else
        printf("%d is the greater number", j);

    getch();
    return 0;
}
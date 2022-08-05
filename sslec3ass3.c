// 3. Write a program to check whether a given number is an even number or an odd
// number

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the number : ");
    scanf("%d", &i);
    if (i % 2 == 0)
        printf("%d is the even nummber", i);
    else
        printf("%d is the odd number", i);

    getch();
    return 0;
}
// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    system("cls");

    printf("Enter the lengths of the sides of the triangle : ");
    scanf("%d%d%d", &a, &b, &c);
    if ((a *a == b * b + c * c) || (b *b == a * a + c * c) || (c *c == a * a + b * b))
    {
        printf("It is a valid triangle ");
    }
    else
    {
        printf("It is not a valid triangle");
    }
    

    getch();
    return 0;
}
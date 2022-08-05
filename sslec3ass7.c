// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, D;
    system("cls");

    printf("Enter the values of 'a' , 'b' and 'c' : ");
    scanf("%d%d%d", &a, &b, &c);
    D = (b * b - (4 * a * c));
    if (D < 0)
    {
        printf("Imaginary roots");
    }
    else if (D == 0)
    {
        printf("Roots are real and equal");
    }
    else
    {
        printf("Roots are  real and distinct");
    }

    getch();
    return 0;
}
// 18. Write a program which takes the month number as an input and display number of 
// days in that month
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    system("cls");

    printf("Enter the month number : ");
    scanf("%d",&i);

    if (i==1)
    {
        printf("31 DAYS");
    }
    if (i==2)
    {
        printf("28 DAYS if not a leap year and 29 days if leap year");
    }
    if (i==3)
    {
        printf("31 DAYS");
    }
    if (i==4)
    {
        printf("30 DAYS");
    }
    if (i==5)
    {
        printf("31 DAYS");
    }
    if (i==6)
    {
        printf("30 DAYS");
    }
    if (i==7)
    {
        printf("31 DAYS");
    }
    if (i==8)
    {
        printf("31 DAYS");
    }
    if (i==9)
    {
        printf("30 DAYS");
    }
    if (i==10)
    {
        printf("31 DAYS");
    }
    if (i==11)
    {
        printf("30 DAYS");
    }
    if (i==12)
    {
        printf("31 DAYS");
    }
    

    getch();
    return 0;
}
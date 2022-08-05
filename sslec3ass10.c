// 10. Write a program which takes the cost price and selling price of a product from the 
// user. Now calculate and print profit or loss percentage
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int cp,sp;
    system("cls");

    printf("Enter the cost price and selling price of the product : ");
    scanf("%d%d",&cp,&sp );
    if (sp>=cp)
    {
        printf("%%percentage profit is : %d%%",((sp-cp)*100)/cp);
    }
    else
    {
         printf("%%percentage loss is : %d%%",((cp-sp)*100)/cp);
    }
    
    

    getch();
    return 0;
}
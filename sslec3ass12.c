// 12. Write a program to check whether a given alphabet is in uppercase or lowercase
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i;
    char ch;
    system("cls");

    printf("Enter the character : ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("%c is in UPPERCASE");
    }
    if (ch >= 97 && ch <= 122)
    {
        printf("%c is in LOWERCASE");
    }

    getch();
    return 0;
}
// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char ch;
    system("cls");

    printf("Enter the character : ");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("UPPERCASE alphabet");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("lowercase alphabet");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("digit");
    }
    else
    {
        printf("A special character");
    }

    getch();
    return 0;
}
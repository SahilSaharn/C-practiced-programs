#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char s1[100], char1;
    int i, j, posi;
    printf("enter a string:");
    gets(s1);
    printf("enter the character from you want to print a string:");
    scanf("%c", &char1);
    for (i = 0; i < strlen(s1); i++)
    {
        if (char1 == s1[i])
        {
            posi = i;
            break;
        }
    }
    for (i = posi; i < strlen(s1); i++)
    {
        printf("%c", s1[i]);
    }

    return 0;
}
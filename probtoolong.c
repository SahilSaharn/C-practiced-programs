// problem:-71A - Way Too Long Words

#include <stdio.h>
#include <string.h>
int main()
{
    int test, charno,i;
    char stri[100];
    scanf("%d\n",&test);
    for(i=1;i<=test;i++)
    {
    gets(stri);
    charno = strlen(stri);
    if (charno > 10)
    {
        printf("%c%d%c\n", stri[0], charno - 2, stri[charno-1]);
    }
    else
    {
        puts(stri);
        
    }
    }

    return 0;
}
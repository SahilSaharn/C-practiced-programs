#include<stdio.h>
#include<string.h>

int main()
{
    char stri[100];
    char copy[100];
    int i,lenght,j=0;
    gets(stri);
    lenght=strlen(stri);
    for(i=0;i<lenght;i++)
    {
        if(stri[i]!='a'&&stri[i]!='e'&&stri[i]!='i'&&stri[i]!='o'&&stri[i]!='u'&&stri[i]!='y')
        {
            copy[j]=stri[i];
            j++;
        }
    }
    lenght=strlen(copy);
    for(i=0;i<lenght;i++)
    {
        printf(".");
        printf("%c",copy[i]);
    }


    return 0;
}
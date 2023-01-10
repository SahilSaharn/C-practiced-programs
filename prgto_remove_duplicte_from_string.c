#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char m[100];
    gets(m);
    int i,j;
    for(i=0;i<strlen(m);i=+1)
    {
        for(j=i+1;j<strlen(m);j++)
        {
            if(m[i]==m[j]){m[j]=0;}
        }
    }
    puts(m);
    return 0;
}
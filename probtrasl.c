//program to reverse  string a match with its reversal inpuct by user if matched printed "yes"
//if not matched printed "no"...***...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[100],rev[100],tras[100];
    gets(s);
    int i,j=0,count=0;
    i=strlen(s)-1;

    for(j=0;j<strlen(s);j++)
    {
        rev[j]=s[i];
        i--;
    }

    gets(tras);
    for(i=0;i<strlen(tras);i++)
    {
        if(rev[i]==tras[i])
        {
            count++;
        }
    }
    if(count==strlen(tras)){printf("YES");}
    else{printf("NO");}

    return 0;
}
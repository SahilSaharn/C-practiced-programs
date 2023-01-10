#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,upper=0,lower=0;
    char s[101];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            upper++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            lower++;
        }
    }

    if(upper>lower)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='a' && s[i]<='z')
            {
                s[i]-=32;
            }
        }
    }
    else if(lower>=upper)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
            }
        }

    }
    puts(s);


    return 0;
}
//this program is to compare string(we can also use strcmp(str1,str2)function...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100],str2[100];
    int i,comp=0;
    gets(str1); gets (str2);//input strings...b
    if(strlen(str1)==strlen(str2))
    {
        for(i=0;i<strlen(str1);i++)
        {
            if(str1[i]==str2[i])
            {
                printf(".");
            }
            else
            {
                comp++;
            }
        }
        if(comp==0){printf("strings are equals\n");}
        else{printf("strings are not equal\n");}
    }
    else{printf("strings are not equal\n");}

    return 0;
}
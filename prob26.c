//program to convert lower case to upper case and vice - versa...

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char string[100];int i;
    printf("enter your string:");
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
        if(string[i]>='A'&&string[i]<='Z')
        {
            string[i]+=32;
        }
        else if(string[i]>='a'&&string[i]<='z')
        {
            string[i]-=32;
        }
    }
    puts (string);
    return 0;
}
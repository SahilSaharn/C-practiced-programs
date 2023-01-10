// step 1:in this problem convert the uppercase string or letters to lowercase ...
#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    gets(s);
    int i,len;
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]<='Z')
        {
            s[i]+=32;
        }
        if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' 
        && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='Y')
        {
            printf(".%c",s[i]);
        }
    }

     return 0;
}
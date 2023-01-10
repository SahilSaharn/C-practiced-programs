//program to conv the str.ing to uppercase:-lower case:-
//(check if the character belong in A and Z then add 32 to it in order to get its lowercase value )
//and assisgn it to the same possition of array...
//to covert lower case to upper case add check that chracter lies b/w in a and z then subtract 
//32 from it ascii value ...

#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    int i,j,ascii,lenght;
    gets(s1);
    lenght=strlen(s1);
    for(i=0;i<lenght;i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]=s1[i]+32;
        }
    }
    for(i=0;i<lenght;i++)
    {
        printf("%c",s1[i]);
    }


    return 0;
}
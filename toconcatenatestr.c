#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s1[50],s2[50];
    int i,j,total_lenght;
    printf("enter the your first string...\n");
    gets(s1);
    printf("enter your second string...\n");
    gets(s2);
    total_lenght=strlen(s1)+strlen(s2)+1;
    
    char major[total_lenght];
    for(i=0;i<strlen(s1);i++)
    {
        major[i]=s1[i];
    }
    major[i]=' ';
    i+=1;
    for(i,j=0;i<total_lenght;i++,j++)
    {
        major[i]=s2[j];
    }
    puts(major);

}
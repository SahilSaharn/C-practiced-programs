/*Write a program in C to count the total number of words in a string. Go to the editor

Test Data :
Input: This is w3resource.com
Expected : Total number of words in the string is : 3  */
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100];
    int i,space=0;
    gets(str1);
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]==' ')
        {
            space++;
        }
    }
    printf("The number of spaces:%d\n",space+1);
    
    return 0;
}

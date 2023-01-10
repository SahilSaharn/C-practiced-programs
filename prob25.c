/* Write a program in C to replace the spaces of a string with a specific character

Test Data :
Input: Be glad to see the back of Input replace character : *

Output :After replacing the space with  * the new string is :                 
Be*glad*to*see*the*back*of*     */


#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100];
    int i;
    printf("enter a string...\n");
    gets (str1);
    for(i=0;i<strlen(str1);i++)
    {
        if(str1[i]==' '){
            str1[i]='*';
        }
    }
    puts(str1);
    
    return 0;
}


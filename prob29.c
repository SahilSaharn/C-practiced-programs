/*29. Write a program in C to read a file and remove the spaces between two words of its words..
input:                                           
"The quick brown fox jumps over the lazy dog"                          
After removing the spaces the content is : 
Output :                            
"Thequickbrownfoxjumpsoverthelazydog"*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[100],copy[100];
    int i=0,j=0,len,real=0;
    //we will copy all words without spacs in another array and proint that array...
    gets(str1);
    len=strlen(str1);
    for(i=0;i<len;i++)
    {
        if(str1[i]!=' ')
        {
            copy[j]=str1[i];
            real++;//to count the real characters stored in array to not get garbage values...
            j++;//to increment j which controls copy array...
        }
    }
    for(i=0;i<real;i++) { printf("%c",copy[i]); }//tp print copyed array or removed spaces array
    printf("\n");
    


    return 0;
}

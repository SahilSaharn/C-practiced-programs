#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char string1[10],string2[20];



    scanf("%c",&ch);
  scanf("%s\n", &string1);
  scanf("%[^\n]s", &string2);
    printf("%c\n",ch);
     printf("%s\n",string1);
     printf("%s\n",string2);


    

    
return 0;
}
//simple orogrm to input and output a string...
#include <stdio.h>
int main()
{
    char str[1000];
    int i;

    puts("enter the string:");
    gets(str);
    puts("the string is:\n");
    puts(str);
    for(i=0;i<10;i++)
    {
        printf("%c",str[i]);
    }
    
    return 0;
}
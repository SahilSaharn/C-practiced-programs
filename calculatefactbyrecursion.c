#include <stdio.h>
#include <string.h>
#include <math.h>
int fact(int c);
int main()
{
    int num, facct;
    printf("enter the number you want the factorial of");
    scanf("%d ", &num);
    facct = fact(num);
    printf("%d", facct);
    return 0;
}

int fact(int c)
{
    if(c==2)
    {
        return 2;
    }
    else 
        return( c*fact(c-1));
}
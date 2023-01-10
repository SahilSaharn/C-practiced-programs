#include<stdio.h>
int main()
{
   int a,b,c;
    a=5;
    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <=a; c++)
        {
            
            if(c>=6-b)
            printf(" * ");
            else
            {
                printf("   ");
            }
            
        }

        printf("\n");
    }











    return 0;
}      
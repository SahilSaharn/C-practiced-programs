#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a, i, j;
    printf("enter the number of characters you enat to enter\n");
    scanf("%d",&a);
    char chars[a];
    for ( i = 0; i < a; i++)
    {
        scanf("\n%c",&chars[i]);
    }    
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if(i==j){printf("");}

        else{   
            printf("%c", chars[i]);
            printf("%c ", chars[j]);
        }
        }
        printf("\n");
    }
    return 0;
}
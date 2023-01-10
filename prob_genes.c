#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char parent1 , parent2;
    scanf("%c %c",&parent1,&parent2) ;
    //we will check the same one first ...
    if(parent1 == parent2)
    {
        printf("%c\n",parent1);
    }
    else if(parent1 == 'R' || parent2 == 'R')
    {
        printf("R\n");
    }
    else if(parent1 == 'B' || parent2 == 'B')
    {
        printf("B\n");
    }
    return 0;
}
//program for a linear search....

#include <stdio.h>
int main()
{
    int a,i,checker,hehe=0;
    printf("enter the size of array\n");
    scanf("%d", &a);
    printf("enter your number you want to check...\n");
    scanf("%d",&checker);
    int exo[a];
    for(i=0;i<a;i++){
        printf("enter your numbers:");
        scanf("%d",&exo[i]);
    }
    for (i=0;i<a;i++)
    {
        if(checker==exo[i])
        {
             hehe++;

             break;   
        }   
            
    }
    
    if(hehe>0)
        printf(" YES YOUR DESIRED NUMBER IS PRESENT\n");
    else
        printf("SORRY! IT IS NOT PRESENT...\n");
    
    

    return 0;
}
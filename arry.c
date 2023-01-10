#include<stdio.h>
int main()
{    
    int arre[5];//this is our array 
    int x;
    
    for(int i=0;i<5;i++)
        {
           printf("Enter A Number You Want To Store In Array!\n");
           scanf("%d",&arre[i]);
            
            
        }
        
        printf("THE NUMBERS ARE//----\n");
    for (x=0;x<5;x++)
        {
            printf("%d\n",arre[x]);
        }
    
    return 0;
}
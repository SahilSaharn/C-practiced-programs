#include<stdio.h>
int main()
{
    int test,size,i,no=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d ",&size);
        char str[size];
        for(i=0;i<size;i++)
        {
            scanf("%c",&str[i]);
        }
        for(i=0,no=0;i<size;i++)
        {
            if(str[i]=='I')
            {
                printf("INDIAN\n"); break;
            }
            else if(str[i]=='Y')
            {
                printf("NOT INDIAN\n"); break;
            }
            else
            {
                no++;
            }
        }
        if(no==size)
        {
            printf("NOT SURE\n");
        }
    }
    
    return 0;
}
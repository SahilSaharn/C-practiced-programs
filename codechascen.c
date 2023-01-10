#include<stdio.h>
int main()
{
    int suzi,i,j;
    scanf("%d",&suzi);
    int first[suzi];
    for(i=0;i<suzi;i++){
        scanf("%d",&first[i]);
    }
    for(i=0;i<suzi;i++)
    {
        for(j=0;j<suzi;j++)
        {
            if(first[i]>first[j])
                    printf("%d\n",first[i]);
        }
    }
    return 0;
}
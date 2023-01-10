#include<stdio.h>
int main()
{
    int size,i,temp2;
    scanf("%d",&size);
    int mainno[size],temp1[size];

    for(i=0;i<size;i++)
    {
        scanf("%d",&mainno[i]);
        temp1[i]=0;
    }
    for(i=0;i<size;i++)
    {
        while(mainno[i]!=0)
        {
            temp2=mainno[i]%10;
            temp1[i]=(temp1[i]*10)+temp2;
            mainno[i]=mainno[i]/10;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",temp1[i]);
    }
    return 0;
}

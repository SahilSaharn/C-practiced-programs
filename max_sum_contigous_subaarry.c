//brute force approach of n square  time complexity...
//kadenes therm not used...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,j,max=0,maxtemp=0;
    printf("enter the size:");
    scanf("%d",&size);
    int ar[size];
    printf("enter your elements now:::\n");
    for(i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            max=max+ar[j];

        if(max>maxtemp)
        {
            maxtemp=max;
        }
        }

        max=0;
    }
    printf("%d\n",maxtemp);

    return 0;
}
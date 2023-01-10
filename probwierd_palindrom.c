#include<stdio.h>
#include<string.h>
int main()
{
    int test,size,a,i,total=0;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d",&size);
        for(i=0;i<size;i++)
        {
            scanf("%d",&a);
            if(a%2!=0){total++;}
        }
        if(total%2!=0)
        {
            total--;
        }
        printf("%d\n",total/2);
        test--;
    }


    return 0;
}
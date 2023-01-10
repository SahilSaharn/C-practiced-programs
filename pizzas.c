#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k,slices;
        scanf("%d %d",&n,&k);
        for(int i=1;i;i++)
        {
            slices = k * i;
            if(slices % n == 0)
            {
                printf("%d\n",i);
                break;
            }

        }
    }
    return 0;
}
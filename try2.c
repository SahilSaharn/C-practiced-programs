//this approach is the optimized one of make them equal problem...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int max , min, size;
        scanf("%d",&size);
        int arr[size];
        for(int s=0;s<size;s++){
            scanf("%d",&arr[s]);
        }
        max=arr[0];
        for(int i=1;i<size;i++)
        {
            if(max<arr[i]){
                max=arr[i];
            }
        }//this will give us the max value...
        min=__INT_MAX__;
        for(int i=0;i<size;i++)
        {
            if(min>arr[i]){
                min=arr[i];
            }
        }
        printf("%d\n",(max-min));
    }
    return 0;
}
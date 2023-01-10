//this is my approach to that questiopn in general way...
#include<stdio.h>
#include<string.h>
#include<math.h>
int sum ( int [] , int );
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,i;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }

        int max=arr[0];
        for(i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        int moves = 0;
        while ( sum (arr,n)!= max * n)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]!=max)
                {
                    arr[i]+=1;
                }
            }
            moves++;
        }
        printf("%d\n",moves);
    }
    return 0;
}

int sum(int array[],int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum += array[i];
    }

    return sum ;
}
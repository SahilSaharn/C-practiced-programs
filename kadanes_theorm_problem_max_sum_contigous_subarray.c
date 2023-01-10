//this is kadenes theorm and solution of problem max sum of contigous subarray...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,currmax,overallmax;
    printf("enter the siz of array:");
    scanf("%d",&size); int ar[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    currmax=overallmax=ar[0];
    for(i=1;i<size;i++)
    {
        if(currmax>=0)
        {
            currmax+=ar[i];
        }
        else{
            currmax=ar[i];
        }

        if(currmax>overallmax)
        {
            overallmax=currmax;
        }
    }
    printf(" best max is = %d \n",overallmax);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i;
    printf("enter the size:");
    scanf("%d",&size);
    int ar[size];
    printf("enter your elements now\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    int temp,left,checker,right;
    left=checker=0;
    right=size-1;
    while(checker<=right)
    {
        if(ar[checker]==0)
        {
            temp=ar[checker];
            ar[checker]=ar[left];
            ar[left]=temp;
            left++;
            checker++;
        }

        else if(ar[checker]==1)
        {checker++;}

        else
        {
            temp=ar[checker];
            ar[checker]=ar[right];
            ar[right]=temp;
            right--;
        }
    }
    for(i=0;i<size;i++){printf("%d  ",ar[i]);}
    return 0;
}
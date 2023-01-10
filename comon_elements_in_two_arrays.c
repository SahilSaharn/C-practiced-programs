#include<stdio.h>
#include<string.h>
#include<math.h>
void inputarr(int array[],int size,int start);
int rem_dupli( int arra[],int size);
int main()
{
    int size_1,size_2;
    printf("enter the size of first array:");
    scanf("%d",&size_1);
    printf("enter the size of second array:");
    scanf("%d",&size_2);
    //inut the arrays...
    int arr1[size_1],arr2[size_2];
    printf("enter the elements of first array__\n");
    inputarr(arr1,size_1,0);
    printf("enter the elements of second array__\n");
    inputarr(arr2,size_2,0);

    //input over...

    size_1 = rem_dupli(arr1,size_1);

    for(int i =0;i<size_1;i++)
    {
        for(int j=0;j<size_2;j++)
        {
            if(arr1[i] == arr2[j]){
                printf("%d ",arr1[i]);
                break;
            }
        }

    }


    return 0;
}

void inputarr(int array[],int size,int start)
{
    if(start==size){
        return;
    }
    scanf("%d",&array[start]);
    inputarr(array,size,start+1);
}

int rem_dupli( int arra[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arra[i] == arra[j])
            {
                for(int k=j;k<size;k++)
                {
                    arra[k] = arra[k+1];
                }
                size--;
            }

        }

    }
    return size;
}
//completed...
//problem:- move all the negative elements to front of array ...
//two pointer algorithm used....
#include<stdio.h>
#include<string.h>
#include<math.h>
void swp(int * ,int * );
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }//input the array...

    int p1,p2=0;
    for(p1=0;p1<size;p1++)
    {
        if(arr[p1]<0)
        {
            swp(&arr[p1],&arr[p2]);
            p2++;
        }

    }
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

void swp(int *a,int *b){

    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}

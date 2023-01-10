// in this we will learn to how yo rotetae the array...
// inpiu     :-| 1 | 2 | 3 | 4 | 5 |
// output:)  |5 |1 |2 |3 |4 |
#include<stdio.h>
#include<string.h>
#include<math.h>
void swp(int * ,int * );
int main()
{
    int size,cont;
    printf("enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }//inpuut the array...

    int last= size-1,i;
    do{
    for(i=0;i<size-1;i++){
        swp(&arr[i],&arr[last]);
    }

    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\nenter 0 to quit enter 1 to rotate again:");
    scanf("%d",&cont);
    }while (cont !=0);
    return 0;
}

void swp(int *a,int *b){

    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
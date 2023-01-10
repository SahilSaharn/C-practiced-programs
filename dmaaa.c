//this program calculates the sum of both arrays by reserving memeory using malloc and free ...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int *ptr, n, looper, sum=0 ;
    printf("enter the no. of array you want to sum:");
    scanf("%d", &looper);

    while (looper--)
    {
        printf("enter the size:");
        scanf("%d", &n);
        ptr = (int *) malloc(n * sizeof(int));
        // now our array name is our pointer name ...
        printf("enter the elements of array :\n");
        for(int i=0 ; i<n ; i++){
            scanf("%d",&ptr[i]);
        }

        for(int i=0 ; i<n ;i++){
            sum = sum + ptr[i];
        }
        free(ptr);
    }

    printf("the sum of both array elements is %d\n",sum);

    return 0;
}
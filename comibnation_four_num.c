#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int arr[4];
    printf("enter the four non repetetive numbers:\n");
    for(int i = 0 ; i < 4 ; i++ )
        scanf("%d",&arr[i]);

    for(int i=0 ; i< 4 ;i++ )
    {
    
        for(int j =0 ; j< 4 ;j++ )
        {
            for(int k=0 ;k< 4 ;k++)
                printf("%d",arr[k]);
            
            printf("\n");

            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp ;

        }

    }
    return 0;
}
// incomplete...






















































































































































































































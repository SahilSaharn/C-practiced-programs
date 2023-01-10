#include<stdio.h>
#include<string.h>
#include<math.h>
void sort(int array[], int n )
{
    int i,j;
    for(i=0;i<n-1;i++){

        for(j=0;j<n-1;j++){

            if(array[j]>array[j+1]){

                //swap them..
                array[j] = array[j] ^ array[j+1];
                array[j+1] = array[j] ^ array[j+1];
                array[j] = array[j] ^ array[j+1];
            }
        }
    }
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test--){

        int i;
        int arr[4];
        for(i=0;i<4;i++){  scanf("%d",&arr[i]);  }//input the array...
        sort(arr,4);
        //for(i=0;i<4;i++){    printf("%d  ",arr[i]);  }
        if(arr[0]== arr[1] && arr[2]==arr[3])
        {
            printf("YES\n");
        }
        else{ printf("NO\n");}
    }
    return 0;
}
//submitted...
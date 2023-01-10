//find sum of minor diagonal elements & sum of major diagonal elements .....completed///
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int rows,coloums;
    printf("enter the rows:");
    scanf("%d",&rows);
    printf("enter the colums:");
    scanf("%d",&coloums);
    int arr[rows][coloums];
    printf("now enter your matrix:\n");

    for(int i =0;i<rows;i++){
        for( int j=0 ;j<coloums;j++){
            scanf("%d",&arr[i][j]);
        }
    }//inputed the array...

    int sum =0,sum_2=0;
    for(int i =0 ;i< rows;i++)
    {
        for(int j=0;j<coloums;j++)
        {
            if(i == j){
                sum += arr[i][j];
            }
            else{
                sum_2+=arr[i][j];
            }
        }
    }
    printf("the sum of major diagonal elements is: %d\n",sum);
    printf("the sum of minor diagonal elements is: %d\n",sum_2);
    return 0;
}
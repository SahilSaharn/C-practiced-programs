#include<stdio.h>
#include<string.h>
#include<math.h>
void trans(int arr[3][3]);
int main()
{
    printf("this calculator is for 2 x 2 matrices\n");
    int ar[3][3];
    printf("enter the elements of matrix--\n");
    int i,j;
    for(i = 0;i<3;i++){
        for(j =0 ;j<3 ;j++){
            scanf("%d",&ar[i][j]);
        }
    }//inputed the array elements...

    trans(ar);
    return 0;
}

void trans(int arr[3][3])
{
    for(int i =0 ;i<3 ;i++)
    {
        for(int j=0 ;j< 3;j++)
        {
            printf("%d   ",arr[j][i]);
        }
        printf("\n");
    }
}

//task completed....***....
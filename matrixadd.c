#include<stdio.h>
int main()
{
    int size,i,j,help1,help2;
    printf("enter the order of both matrix note:-(make sure that the number of rows & coulums are same\n");
    scanf("%d",&size);
    int arr1[size][size],arr2[size][size],sum[size][size];
    printf("ENTER THE FIRST MATRIX\n");
    for(i=0,help1=1;i<size;i++)
    {
        for(j=0,help2=1;j<size;j++,help2++)
        {
            printf("enter the value of [%d] [%d]:-",help1,help2);
            scanf("%d",&arr1[i][j]);
        }
        help1++;
    }
    printf("ENTER THE SECOND MATRIX\n");
    for(i=0,help1=1;i<size;i++)
    {
        for(j=0,help2=1;j<size;j++,help2++)
        {
            printf("enter the value of [%d] [%d]:-",help1,help2);
            scanf("%d",&arr2[i][j]);
        }
        help1++;
    }
    printf("THE SUM MATRIX IS:-\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("%d  ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }



    return 0;
}

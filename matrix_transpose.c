#include<stdio.h>
int main()
{
    int row,colom;
    printf("enter the no.of rows:");
    scanf("%d",&row);
    printf("enter the no.of coloums:");
    scanf("%d",&colom);

    int arr[row][colom];
    //input tha array now...

    for( int i=0 ;i< row;i++)
    {
        for( int j=0 ;j<colom;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }//input over...
    printf("the transpose is --\n");
    for(int i=0;i<colom;i++)
    {
        for(int j=0 ;j<row;j++)
        {
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
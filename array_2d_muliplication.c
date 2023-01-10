#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int row_1,column_1,row_2,column_2;
    printf("enter the rows of first matrix:");
    scanf("%d",&row_1);
    printf("enter the coloumns of first matrix:");
    scanf("%d",&column_1);
    int arr1[row_1][column_1];
    printf("enter the rows of second matrix:");
    scanf("%d",&row_2);
    printf("enter the coloumns of second matrix:");
    scanf("%d",&column_2);
    int arr2[row_2][column_2];

    int i,j;
    //input the both arrays...
    printf("now enter the elements of your first matrix\n");
    for(i=0;i<row_1;i++){

        for(j=0;j<column_1;j++){
            scanf("%d",&arr1[i][j]);
        }
        
    }
    printf("now enter the elements of your second matrix\n");
    for(i=0;i<row_2;i++){

        for(j=0;j<column_2;j++){
            scanf("%d",&arr2[i][j]);
        }

    }//inputs finished...
    //real shit begins now...
    int row_3,column_3,sum;
    row_3=row_1;
    column_3= column_2;
    int arr3_result[row_3][column_3];
    if(column_1!= row_2){printf("your matrix cannot be multiplied !SORRY!\n");}

    else{
        sum =0;
        for( i = 0; i<row_3;i++)
        {
            for(j=0;j<column_3;j++)
            {
                for(int k=0;k<row_2;k++)
                {
                    sum =  sum +(arr1[i][k] * arr2[k][j]);
                }
                arr3_result[i][j]= sum;
                sum= 0;
            }
        }

        for(i=0;i<row_2;i++){

            for(j=0;j<column_2;j++){
                printf("%d  ",arr3_result[i][j]);
            }
            printf("\n");
        }
    }


    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int rows,k;
    printf("enter the number of rows you want:");
    scanf("%d",&rows);
    printf("1\n");
    k=3;
    for(int i =1;i<=rows-1;i++)
    {   
        for(int j=1;j<=k;j++)
        {
            if(j % 2 == 0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }

        }
        k += 2;
        printf("\n");
    }
    return 0;
}
//completed...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,j;
    printf("enter the size of array:");
    scanf("%d",&size);
    int user[size];
    printf("enter the your numbers you want table of\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&user[i]);
    }
    printf("your tables are:-\n");
    for(i=0;i<size;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d\t",user[i]*j);
        }
        printf("\n---------------------------------------------------------------------------\n");
    }


    return 0;
}
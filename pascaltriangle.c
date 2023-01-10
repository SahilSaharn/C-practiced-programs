#include<stdio.h>
#include<string.h>
#include<math.h>
int factorial(int );
int coefcient(int , int );
int main()
{
    int no_of_rows,i,j,k,copy_no_rows;
    printf("enter the number of rows you want:");
    scanf("%d",&no_of_rows);
    copy_no_rows=no_of_rows;
    for(i=0;i<no_of_rows;i++)
    {
        for(k=1;k<copy_no_rows;k++)//loop for spaces 
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            int ans = coefcient(i,j);
            printf("%d ",ans);
        }
        copy_no_rows--;
        printf("\n");
    }
    return 0;
}
int fact(int a)
{
    int fact=1;
    for( int sup=1;sup<=a;sup++)
    {
        fact=fact*sup;
    }
    return fact;
}

int coefcient(int n, int r)
{
    int coff;
    coff=(fact(n)/(fact(r)*fact(n-r)));
    return coff;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
void swp( int *,int *);
int main()
{
    int a,b;
    printf("entre your numbers:");
    scanf("%d %d",&a,&b);
    printf("befor swap a = %d , b = %d\n",a,b);
    swp(&a,&b);
    printf("after swap a = %d , b = %d\n",a,b); 
    return 0;
}

void swp( int *k,int *l)
{
    int temp = *k;
    *k = *l;
    *l = temp;
}
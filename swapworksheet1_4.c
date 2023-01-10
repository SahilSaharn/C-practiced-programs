#include<stdio.h>
void swap(int * ,int * );
//here we swaped the two variablkes by using xor ^ operator ....(***)....
int main()
{
    int a,b,temp_var;
    printf("enter your numbers\n");
    printf("a=");scanf("%d",&a);
    printf("b=");scanf("%d",&b);
    printf("\nbefore swapping....\na=%d ,b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swapping....\na=%d ,b=%d\n",a,b);
    return 0;
}

void swap(int *x,int *y)
{
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}

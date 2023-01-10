#include<stdio.h>
int fact(int number) 
{
if(number==0 ||number==1 )
{
    return 1;
}
else
{
    return (number * fact(number-1));
}
}

int main()
{
    int a;
    printf("ENTER THE NO. YOU WANT FACTORIAL OF\n",a);
    scanf("%d",&a);
    printf("THE FACTORIAL OF %d IS %d!\n",a,fact);
return 0;



}




#include<stdio.h.>

int fibo(int x);

int main()

{
int a,b;
printf("Enter A Number Till you want fibbonnaci series:\n");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
   printf("%d.\n",fibo(b));

}

    return 0;
}

int fibo(int x)
{
    
if (x==1||x==2)
    return 1;



    return (fibo(x-1)+fibo(x-2));
    






}
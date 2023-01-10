#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a;

printf("enter a no. till you want multiple of 20.\n");
scanf("%d",&num);
a=0;

while(a<num)
{
    if (a%4==0)
    {
        
           printf("%d\n",a);
    }
    
    
    a++;



}






return 0;
}

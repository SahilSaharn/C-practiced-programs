#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter a Number Till  You Need Counting!\n");
scanf("%d",&b);
a=1;
while (a<=b)
{
    printf("%d\n",a);
    printf("-------\n");
    a++;
}
return 0;
}

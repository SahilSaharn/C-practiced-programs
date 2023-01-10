#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b=0,c;
printf("ENTER A NUMBER\n");
scanf("%d",&a);
while (a!=0)
{
   c=a%10;
   b=b*10+c;
   a=a/10;
}
printf("%d\n",b);


return 0;
}

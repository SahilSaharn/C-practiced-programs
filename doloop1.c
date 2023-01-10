#include<stdio.h>

int main()
{
    int a,b=0;

printf("ENTER A NUMBER\n");
scanf("%d",&a);

do      // DO LOOP 
{
   printf("%d\n",b);
   b=b+1;
} while (b<=a);



   
   return 0;
}


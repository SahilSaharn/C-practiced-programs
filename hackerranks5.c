#include <stdio.h>
#include <math.h>
#include <conio.h>
void sumdif(int*a,int*b);
int main()
{
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);
    sumdif(&num1,&num2);
    

    return 0;
}
  void sumdif(int *a,int *b)
{
   int x,y;
   x=*a+*b;
   y=*a-*b;
   if (x<0)
   {
       x=-1*x;
   }
   else if (y<0)
   {
       y=-1*y;
   }
   
   printf("%d\n",x);
   printf("%d\n",y);

}
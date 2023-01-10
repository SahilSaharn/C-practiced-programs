/*this program count digits in 1st loop & find armstrong numbr in 2nd loop*/

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
   int d, s = 0;
   int a, b, sum = 0, cop, thee;
   printf("enter a num...\n");
   scanf("%d", &d);
   cop = d;
   thee = d;
   while (d != 0)
   {
      d = d / 10;
      s++;
   }
   printf("YOUR NUM HAS %d DIGITS\n", s);

   while (cop != 0)
   {
      a = cop % 10;
      b = pow(a, s);
      sum = sum + b;
      cop = cop / 10;
   }
   printf("The ARMSTRONG NUMBER IS %d...\n", sum);
   if (sum == thee)
   {
      printf("YOUR NUMBER IS ARMSTRONG...\n");
   }
   else
   {
      printf("YOUR NUMBER IS NOT ARMSTRONG...\n");
   }

   return 0;
}

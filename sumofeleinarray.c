#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
     int joke[4]={1,2,3,4};
     int a=0,b=0;
    while (a<4) 
    {
       b=b+joke[a];

      a++;
    }
           
printf("%d...\n",b);


return 0;
}

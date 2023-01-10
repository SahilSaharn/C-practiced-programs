#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
   printf("ENTER NUMBER A\n");
   scanf("%d",&a);
    
    printf("ENTER NUMBER B\n");
   scanf("%d",&b);   
    
    printf("ENTER NUMBER C\n");
   scanf("%d",&c); 
   int d;
   
   d=(b*b)-(4*a*c);
  
  int e;
   e = sqrt(d);
   
   
   int x1,x2,x3,x4;
   
   x1=(b*-1)+e;
   

   x2=x1/2*a;
    printf(" So the X value is %d\n",x2);
    
    
   x3=(b*-1)-e;
   

   x4=x3/2*a;
    printf(" the another X value is %d\n",x4);   
    
    
    
   
    
    return 0;
    
}
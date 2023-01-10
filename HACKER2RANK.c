#include<stdio.h>
int max_of_number(int a,int b,int d,int c)
{
    

   return (a>b && a>c && a>d)? a:(b>c && b>d)? b: (c>d) ?c: d;


}





     int main()
     {
int a,b,c,d;
 printf("ENTER FOUR INTEGERS\n");
scanf("%d %d %d %d",&a,&b,&c,&d);
int ans = max_of_number( a, b, c, d);
printf("%d\n",ans);



return 0;


}
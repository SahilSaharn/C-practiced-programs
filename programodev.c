#include<stdio.h>
int main()
{char x;
int a,b;
printf("S-E-L-E-C-T\n");
printf("O)For Odd\nE)For Even\nJ)For Multiple of 4\nK)For Multiple Of 5\n");
scanf("%c",&x);
switch(x)
{
    /*CASE 1ST*/
 case 'O' :
 {printf("Enter A Number Till You want odd No.\n");
 scanf("%d",&a);
 b=0;
 while(b<a)
 {
      if (b%2==0)
      {b=b+1;
          printf("%d\n",b);
          
      }
      b++;

 }

 break;
 }
/*CASE 2ND*/
 case'E':
 {
   printf("Enter A Number Till You want even No.\n");
 scanf("%d",&a);

 b=0;
 while(b<a)
 {
      if (b%2==0)
      {
          printf("%d\n",b);
          
      }
      b++;
  
 }

break;
 }

case'J':
{
       printf("Enter A Number Till You want Multiple of 4 No.\n");
       scanf("%d",&a);
       b=0;
while(b<a)
{
    if (b%4==0)
    {
        printf("%d\n",b);
    }
    //NOTE:- DO NOT FORGET TO PUT \n IN PRINTF SO YOU WILL NOT GET DESIRED RESULTS
  b++;

}

break;
}

case'K':
{
       printf("Enter A Number Till You want Multiple of 5 No.\n");
       scanf("%d",&a);
       b=0;
while(b<a)
{
    if (b%5==0)
    {
        printf("%d\n",b);
    }
    //NOTE:- DO NOT FORGET TO PUT \n IN PRINTF SO YOU WILL NOT GET DESIRED RESULTS
  b++;



}
break;
}

}//switch braces//
  
  
  printf("B-----Y-----E\n");
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    return 0;
}
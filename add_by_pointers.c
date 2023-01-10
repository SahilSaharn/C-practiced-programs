#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter your number:");
    scanf("%d",&a);
    printf("enter your number:");
    scanf("%d",&b);

    int *poin1,*poin2;
    poin1 = &a;
    poin2 = &b;

    int sum = *poin1 + *poin2 ;
    printf("%d is the sum\n",sum);
    return 0;
}
//completed...
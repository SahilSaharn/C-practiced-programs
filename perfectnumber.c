//a number is called a perfect number when its divisors sum is equal to that number example:- 6,28,496...
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int num,i;
    printf("enter your number:");
    scanf("%d",&num);
    int divsum=0,div;
    for(i=1;i<num;i++)
    {
        if(num % i == 0){
            printf(" %d ",i);
            divsum=divsum + i;
        }
    }
    printf("\n");
    printf("THE SUM OF ITS DIVISORS IS %d \n",divsum);
    if(num == divsum){
        printf("THE NUMBER :- %d is A PERFECT NUMBER...\n");
    }
    else{
        printf("THE NUMBER :- %d is NOT PERFECT NUMBER...\n");
    }
    return 0;
}
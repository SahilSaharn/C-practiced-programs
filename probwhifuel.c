#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    int x,y,a,b,price_uprise,petrol,diesel;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d     %d     %d     %d     %d",&x,&y,&a,&b,&price_uprise);
        petrol=x+(a*price_uprise);
        diesel=y+(b*price_uprise);
        if(petrol==diesel){printf("SAME PRICE\n");}
        else if(petrol<diesel){printf("PETROL\n");}
        else if(diesel<petrol){printf("DIESEL\n");}
        test--;
    }
    return 0;
}
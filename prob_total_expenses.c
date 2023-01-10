#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    float amount , price;
    double expenses,discount;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%f %f",&amount,&price);
        if(amount>1000)
        {
            expenses=amount*price;
            discount=(expenses*10)/100;
            expenses=expenses-discount;
        }
        else
        {
            expenses=amount*price;
        }
        printf("%f\n",expenses);
    }

    return 0;
}
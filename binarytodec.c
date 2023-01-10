#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long int num;
    printf("enter your binary number:");
    scanf("%ld",&num);
    int last ,po=0,sum =0;
    while(num !=0)
    {
        last = num % 10;
        sum += last * (pow(2,po));
        po++;
        num/= 10;
    }
    printf("%d  ",sum);
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
void prime(int a);

int main()
{
    int num;
    printf("enter the number you want to check:");
    scanf("%d",&num);
    prime(num);
    return 0;
}

void prime( int a)
{
    int loop,pirm=0;
    for(loop=2;loop<a;loop++)
    {
        if(a%loop==0){
            printf("your number is not prime\n");
            break;
        }
        else
            pirm++;
    }
    if(pirm==(a-2))
        printf("your number is prime\n");   
}
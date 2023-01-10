#include<stdio.h>
#include<string.h>
#include<math.h>
int couunt(int );
int reverse (int );
int main()
{
    int num;
    printf("enter your num you want to reverse:");
    scanf("%d",&num);
    num = reverse (num);
    printf("%d ",num);
    return 0;
}

/*int couunt ( int a)
{
    int co=0;
    while(a!=0)
    {
        a = a / 10;
        co++;
    }
    return co;
}*/

int reverse (int number)
{
    int last,rev=0;
    while(number != 0)
    {
        last= number % 10;
        rev = (rev * 10) + last;
        number = number / 10;
    }
    return rev;
}


#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int main_number,int from ,int till ,int flag)
{
    if(flag ==0 || from > till)
    {
        return flag;
    }
    if(main_number % from == 0)
    {
        flag = 0;
    }
    prime( main_number,from+1,till,flag);

}
int main()
{
    int num,nm1;
    printf("enter the number you want to check:");
    scanf("%d",&num);
    nm1 = num -1;
    int f=prime( num,2,nm1,1);
    if(f)
    {
        printf("your number is prime\n");
    }
    else{
        printf("your number is not prime\n");
    }
    return 0;
}
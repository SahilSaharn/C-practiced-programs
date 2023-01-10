#include<stdio.h>
#include<string.h>
#include<math.h>
int fact(int );
int main()
{
    int num,lastdig,sum=0,num_copy;
    printf(" enter your number :=");
    scanf("%d",&num);
    num_copy=num;
    while(num != 0){

        lastdig= num % 10;
        sum = sum + fact(lastdig);
        num = num / 10;
    }
    if(sum == num_copy){
        printf("it is a strong number == %d\n",num_copy);
    }
    else{
        printf("it is not a strong number == %d\n",num_copy);
    }

    return 0;
}

int fact(int number)
{
    int i,factorial=1;
    for(i=1;i<=number;i++){
        factorial=factorial * i;
    }
    return factorial;
}
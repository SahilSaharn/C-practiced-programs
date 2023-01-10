#include<stdio.h>
#include<string.h>
#include<math.h>
int countt(int number,int );
int main()
{
    int num;
    printf("enter the digit:");
    scanf("%d",&num);
    int count = countt(num,0);
    printf("%d ",count);
    return 0;
}

int countt(int number,int j)//always pass j as 0 in order to get desired results...
{   
    if(number == 0){
        return j;
    }
    number /= 10;
    j++;
    countt(number,j);
}
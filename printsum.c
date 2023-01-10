#include<stdio.h>
#include<string.h>
#include<math.h>
int sum(int );
int main()
{
    int num;
    scanf("%d",&num);
    int k =sum(num);
    printf("%d",k);
    return 0;
}

int sum (int n)
{
    if(n <= 1)
    {
        return 1;
    }
    int summ = n + sum(n-1);

}
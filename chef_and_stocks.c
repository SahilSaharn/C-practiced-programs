#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    scanf("%d",&size);
    while(size--)
    {
        long int stock,a,b,percent;
        scanf("%ld %ld %ld %ld",&stock,&a,&b,&percent);
        int percent_copy;
        if(percent<0){percent_copy = percent * -1;}
        else{ percent_copy= percent;}
        float stock_after_time;
        stock_after_time = (stock * percent_copy) / 100;
        
        if(percent<0)
        {
            stock = stock - stock_after_time;
        }
        else
        {
            stock = stock + stock_after_time;
        }

        if(stock>a && stock<b)
        {
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()  
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        int n, count =0 ;
        scanf("%d",&n) ;
        while (n > 0)
        {
            if(n >= 100){
                n = n - 100;
                count++;
            }
            else if(n >= 50 ){
                n = n - 50;
                count ++;
            }
            else if(n >= 10){
                n = n-10;
                count++;
            }
            else if(n >= 5){
                n = n -5;
                count++;
            }
            else if(n >= 2){
                n = n -2;
                count++;
            }
            else{
                n = n-1;
                count++;
            }

        }
        printf("%d\n",count);

    }
    return 0;
}
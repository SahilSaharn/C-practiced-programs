#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int a,b,x;
        scanf("%d %d %d",&a,&b,&x);
        int count = 0;

        while(a< b)
        {
            a = a + x;
            count++;
        } 

        printf("%d\n",count);  
    }
    return 0;
}
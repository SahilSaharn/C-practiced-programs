#include <stdio.h>
int main()
{
    int test;
    int a, b, c;
    scanf("%d", &test); // input test cases...
    while (test)
    {
        scanf("%d %d %d", &a, &b, &c);
        if(a>b && a>c){
            if(b>c){
                printf("%d\n",b);
            }
            else{
                printf("%d\n",c);
            }
        }
        else if(b>a&&b>c){
            if(a>c)
            {
                printf("%d\n",a);
            }
            else{
                printf("%d\n",c);
            }
        }
        else{
            if(b>a){
                printf("%d\n",b);
            }
            else{
                printf("%d\n",a);
            }
        }


        test--;
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int useri1,loop;
    scanf("%d",&useri1);
    for(loop=1;loop<=100;loop++)
    {
        if(loop<10)
        {
            printf("%d ",loop);
        }

        else if(loop%10!=7)
        {
            printf("%d ",loop);
        }
        else
            printf("-- ");

    }

    return 0;
}
#include<stdio.h>
int main()
{
    int test,x,y,i=1,o=0;
    scanf("%d",&test);
    while(test)
    {
        scanf("%d %d",&x,&y);
        if(x==1||x==0||y==0){printf("0\n");}
        else if(x<=2*y)
        {
            while(y)
            {
                if(2*y==x){
                    printf("%d\n",y);
                    break;
                }
                y--;
            }
        }
        test--;
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
int multipli(int , int );
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int ans=multipli(x,y);
    printf("%d  ",ans);
    return 0;
}

int multipli(int a,int n)
{
    if(n == 1)
    {
        return a;
    }
   int ab = a + multipli(a,n-1);
}
//completed...
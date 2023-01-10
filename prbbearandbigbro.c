#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,i,o=0;
    scanf("%d %d",&a,&b);
    if(a<=b)
    {
        for(i=1;a<=b;i++)
        {
            if(a<=b)
            {
                o++;
            }
            a=a*3;
            b=b*2;
            
            
        }
    }
    printf("%d",o);
    return 0;
}
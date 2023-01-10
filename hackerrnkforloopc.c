#include <stdio.h>
int main()
{
    int a, b, i,j=10,k=9;
    scanf("%d", &a);
    scanf("%d", &b);
    if(0<a<=9)
    {
        if(0<b<10){
            k=b;
        }
        for(i=a;i<=k;i++)
        {
             if(i==1) 
                printf("one\n");
                            
            if(i==2)
                printf("two\n");
                            
            if(i==3)
                printf("three\n");
                            
            if(i==4)
                printf("four\n");
                            
            if(i==5)
                printf("five\n");
                            
            if(i==6)
                printf("six\n");
                            
            if(i==7)
                printf("seven\n");
                            
            if(i==8)
                printf("eight\n");
                            
            if(i==9)
                printf("nine\n");
        }
    }
    else
    {
        j=a;
    }
    for(i=j;i<=b;i++)
    {
        if(i%2==0)
            printf("even\n");

        else    printf("odd\n");    
    }



    return 0;
}
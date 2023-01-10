#include<stdio.h>
int main()
{ int a,b;
    
    printf("ENTER YOUR MARKS IN MATHS EXAM!\n");
    scanf("%d",&a);
    printf("YOUR MATHS MARKS ARE=%d\n",a);


    if (a>40)
    {
       printf("CLAIM PRIZE=15Rs\n");
    }

    else if (a<40)
    {
        printf("SORRY!\n");
    }

    printf("ENTER YOUR MARKS IN SCIENCE EXAM!\n");
    scanf("%d",&b);
    printf("YOUR SCIENCE MARKS ARE=%d\n",b );
    
     if (b<40)
    {
        printf("SORRY!\n");
    }

    else if (a>40,b>40)
    {
        printf("CLAIM PRIZE=45Rs");
    }
    
    else if (b>40)
    {
        printf("CLAIM PRIZE 15 Rs\n");
    }
    
    
    
    








    
    return 0;                                                                 }
#include<stdio.h>
int main()
{
    int hypo,side1,side2,temp;
    printf("enter value of hypotenues=");
    scanf("%d",&hypo);
    printf("enter value of side1=");
    scanf("%d",&side1);
    printf("enter value of side2=");
    scanf("%d",&side2);
    temp=((side2*side2)+(side1*side1));

    if(hypo*hypo==temp)
    {
        printf("your equation %dsq=%dsq + %dsq FOLLOWS The pythagoras th...\n",hypo,side1,side2);
    }
    else{
        printf("your equation %dsq=%dsq + %dsq Does NOT FOLLOWS The pythagoras th...\n",hypo,side1,side2);
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int num,o=0;
    scanf("%d",&num);
    for(int i=1;num!=0;i++)
    {
        num=num/10;
        o++;
    }
    if(o==1){printf("1\n");}
    else if(o==2){printf("2\n");}
    else if(o==3){printf("3\n");}
    else{printf("More than 3 digits\n");}
    return 0;
}
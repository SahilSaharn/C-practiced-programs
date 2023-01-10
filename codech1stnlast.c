#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int   maain[a],lastdigit[a],firstdigit[a];


    for(i=0;i<a;i++)
    {
        scanf("%d",&maain[i]);
    }
    for(i=0;i<a;i++)
    {
        lastdigit[i]=maain[i]%10;
    }
    for(i=0;i<a;i++)
    {
        while(maain[i]>0){
            firstdigit[i]=maain[i]%10;
            maain[i]=maain[i]/10;
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d\n",lastdigit[i]+firstdigit[i]);
    }

    return 0;
}
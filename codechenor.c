#include<stdio.h>
int main()
{
    int n,k,i,o=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int enor[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&enor[i]);
    }
    for(i=0;i<n;i++)
    {
        if(enor[i] % k==0) {
            o++;
        }
    }
    printf("%d\n",o);

    return 0;
}
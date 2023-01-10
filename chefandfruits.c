#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,m,k,min;
        scanf("%d %d %d",&n,&m,&k);
        int bigger,smaller;
        if(n>m){
            bigger=n;
            smaller=m;
        }
        else{
            bigger=m;
            smaller=n;
        }
        min=__INT_MAX__;
        for(int i=1;i<=k;i++){

            smaller++;
            int diff = bigger-smaller;
            if(diff<min && diff>=0)
            {
                min=diff;
            }
        }
        printf("%d\n",min);

    }
    return 0;
}
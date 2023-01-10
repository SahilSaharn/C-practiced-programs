#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int size,sizecopy,i,j,k;
        scanf("%d",&size);
        sizecopy=size;
        int mainarr[size], copyarr[sizecopy];
        for(i=0;i<size;i++)//input the dools type...
        {
            scanf("%d",&mainarr[i]);
            copyarr[i]=mainarr[i];
        }
        for(i=0;i<sizecopy;i++)
        {
            for(j=i+1;j<sizecopy;j++)
            {
                if(copyarr[i]==copyarr[j])
                {
                    for(k=j;k<sizecopy;k++)
                    {
                        copyarr[k]=copyarr[k+1];
                    }
                    sizecopy--;
                }
            }
        }
        int count[sizecopy];
        for(i=0;i<sizecopy;i++){count[i]=0;}
        for(i=0;i<sizecopy;i++)
        {
            for(j=0;j<size;j++)
            {
                if(copyarr[i]==mainarr[j])
                {
                    count[i]++;
                }
            }
        }
        for(i=0;i<sizecopy;i++)
        {
            if(count[i]%2!=0)
            {
                printf("%d\n",copyarr[i]);
            }
        }


    }
    return 0;
}
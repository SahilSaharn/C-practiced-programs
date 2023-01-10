#include <stdio.h>
int main()
{
    int a, i, k = 0, lstdig;

    scanf("%d", &a);
    int ar[a];
    int ar2[a];
    int ar3[a];

    for (i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
        ar2[i] = 0;
    }

    for(i=0;i<a;i++)
    { 
        while (ar[i] != 0)
        {
            lstdig= ar[i] % 10;
            ar2[i] = ar2[i] + lstdig;
            ar[i] = ar[i] / 10;
        }
    }
    for(i=0;i<a;i++){
        printf("%d\n",ar2[i]);
    }
    


    return 0;
}
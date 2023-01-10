#include <stdio.h>
int main()
{
    int arraysize, i, comp = 0,playerno;
    scanf("%d", &arraysize);
    int a1[arraysize], a2[arraysize], lead[arraysize],playe[arraysize];
    for (i = 0; i < arraysize; i++) //to take inputs...
    {
        scanf("%d", &a1[i]);
        scanf("%d", &a2[i]);
    }
    for (i = 0; i < arraysize; i++) //to create lead array...
    {
        if (a1[i] > a2[i])
        {
            lead[i] = a1[i] - a2[i];
            playe[i]=1;
        }
        else
        {
            lead[i] = a2[i] - a1[i];
            playe[i]=2;
        }
    }
    for(i = 0; i < arraysize; i++) 
    {
        printf("%d\n",playe[i]);
    }   
    for (i = 0; i < arraysize; i++) //finding largest number from lead aray....
    {
        if (lead[i] > comp)
        {
            comp = lead[i];
        }
    }
    for(i = 0; i < arraysize; i++)
    {
        if(comp==lead[i])
        {
            playerno=i;
            break;
        }
    }
    printf("%d  %d\n",playe[playerno],comp);

    return 0;
}
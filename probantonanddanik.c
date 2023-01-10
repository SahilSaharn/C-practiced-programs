#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size;
    int anton = 0, danik = 0, i;
    scanf("%d\n", &size);
    char s[size];
    gets(s);
    for (i = 0; i < size; i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        printf("Anton");
    }
    else if (danik > anton)
    {
        printf("Danik");
    }
    else
    {
        printf("friendship");
    }
    return 0;
}
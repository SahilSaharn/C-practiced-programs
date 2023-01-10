//Write a C program to remove all repeated characters from a given string.
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,j,k;
    printf("enter the size:");
    scanf("%d",&size);
    char mistr[size];
    printf("enter your string:");
    scanf("%s",mistr);
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(mistr[i]==mistr[j])
            {
                for(k=j;k<size;k++)
                {
                    mistr[k]=mistr[k+1];
                }
                size--;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%c  ",mistr[i]);
    }

    return 0;
}
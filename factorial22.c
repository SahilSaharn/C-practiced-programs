#include<stdio.h>
#include<string.h>
#include<math.h>
void fact(int ,int ,int);
int main()
{
    int um;
    scanf("%d",&um);
    fact(um,1,1);
    return 0;
}

void fact(int n,int facto,int i)
{
    if(i>n)
    {
        printf("%d",facto);
        return;
    }
    facto = facto * i;
    fact(n,facto,i+1);
}
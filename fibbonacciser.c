#include<stdio.h>
#include<string.h>
#include<math.h>
void fibbo( int ,int ,int );
int main()
{
    int nth_term,n1,n2;
    scanf("%d",&nth_term);
    n1=0;
    n2=1;
    printf("%d  %d  ",n1,n2);
    fibbo(nth_term-2,n1,n2);
    return 0;
}

void fibbo(int n,int k,int j )
{
    if(n == 0)
    {
        return;
    }
    int sum = k + j;
    printf("%d  ",sum);
    fibbo(n-1,j,sum);

}
#include<stdio.h>
#include<string.h>
#include<math.h>

void str_reverse(char str[], int k)
{
    int start=0 ,last =k-1;
    while(start<=last)
    {
        char temp = str[start];
        str[start] = str[last];
        str[last]= temp;

        start++;
        last--;
    }
    
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        char str[n];
        scanf("%s",str);
        while(k)
        {
            str_reverse(str,k);
            k--;
        }
        printf("%s\n",str);


    }
    return 0;
}
//completed...s
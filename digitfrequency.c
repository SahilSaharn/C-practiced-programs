#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char num[1000];
    int count_dig[10]={0};
    int i,k,j;s
    scanf("%s",num);
    //we cant directly serach number in char array we have to search that character by its ascii value of that specific int ...
    int asc[strlen(num)];
    for(int i=0;i<strlen(num);i++){
        asc[i] = num[i];
    }
    /*for(int i=0;i<strlen(num);i++){
        printf("%c - %d\n",num[i],asc[i]);
    }*/

    for(i=0,k=48;k<=57;i++,k++)
    {
        for(j=0;j<strlen(num);j++)
        {
            if( k == asc[j]){
                count_dig[i]++;
            }
        }
    }

    for(i =0 ;i<10;i++){
        printf("%d ",count_dig[i]);
    }
}
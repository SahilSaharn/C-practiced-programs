#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i;
    printf("enter the size of array:");
    scanf("%d",&size);
    char str[size];
    printf("enter your string: ");
    scanf("%[^\n]s",str);

    return 0;
}
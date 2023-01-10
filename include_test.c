#include<stdio.h>
#include<C:\CODE MATERIAL\Book Programs\functions.c>
//when we are giving path of the file...
//by using this statement we can use another files and use thier function we defined in them ...
//but main function should not be called more then one time ...
int main()
{
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int s[n];
    printf("enter the elements of array:");
    for(int i=0 ; i<n ;i++){
        scanf("%d",&s[i]);
    }
    sort_array(n,s);
    PRINTARRAY(n,s);
    return 0;
}
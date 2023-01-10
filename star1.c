#include<stdio.h>
#include<conio.h>
int main()
{
    int s,a,x;
printf("How many Number Do You Want Stars Do you want !");
scanf("%d",&s);


for(x=0;x<s;x++)//this (outer loop) loop represent no of rows.
{
for(a=0;a<s;a++)//iner loop repersent no. of  coloumn.
{
    if(x<=a)
    printf("*");
    else
    {
        printf(" ");
    }
    
}
printf("\n");
}


return 0;
}

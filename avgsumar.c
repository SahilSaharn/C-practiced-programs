//this program give us sum and average of our desired nubers...//
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float avg;
    printf("ENTER THE NUMBER OF NUMBERS YOU WANT SUM && AVERAGE OF \n");
    scanf("%d",&a);
    int store1[a];
    printf("ENTER YOUR NUMBERS NOW\n");
    for( b=0;b<a;b++){
        scanf("%d",& store1[b]);
        printf("-----------\n");
    }
    c=0;
    for(b=0;b<a;b++){
        c=c+store1[b];
    }
    printf("THE SUM OF YOUR NUMBERS ARE %d\n",c);
    avg=c/a;
    printf("THE AVERAGE IS %.3f\n",avg);




    return 0;
}
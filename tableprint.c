#include<stdio.h>
#include<string.h>
#include<math.h>
void printtable(int ,int ,int );
int main()
{
    int num,from,to;
    printf("enter the number you want table of:");
    scanf("%d",&num);
    printf("enter the values you wnat table \nfrom:");
    scanf("%d",&from);
    printf("to:");
    scanf("%d",&to);
    //input over...

    printtable(num,from,to);//by recursion...

    return 0;
}

void printtable( int number , int from, int to)
{
    if( from > to){
        return ;
    }

    printf("%d X %d = %d\n",number,from,number * from);
    printtable( number, from+1,to);

}
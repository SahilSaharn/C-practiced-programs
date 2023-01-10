#include<stdio.h>
#include<string.h>
#include<math.h>
void printm(int ,int );
int main()
{
    int from,to;
    printf("enter the number from you want counting:");
    scanf("%d",&from);
    printf("enter the number till you want counting:");
    scanf("%d",&to);
    printm(from,to);
    return 0;
}

void printm(int from,int to)
{
    if(from> to){
        return;
    }
    printf("%d  ",from);
    printm(from+1,to);

}
//completed...
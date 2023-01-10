#include<stdio.h>
#include<string.h>
#include<math.h>
int revles(int ,int );
int main()
{
    int num,copy1,copy2,last_dig,first_dig,count=0,reverse;
    printf("enter your number:");
    scanf("%d",&num);
    //  TO - DO:=
    //input:1234
    //output:4231
    //swap first and last digit of the number...
    copy1=num;
    while (copy1!=0)//this will give us the first digit...
    {
        first_dig=copy1 % 10;
        copy1=copy1/10;
        count++;
    }
    //printf("%d \n",first_dig);
    copy2=num;
    last_dig=copy2 % 10;//this will give us the last digit...
    //printf("%d \n",last_dig);
    num=num/10;           //by this thing we will make the first digit the last digit
    num=num*10;
    num=num+first_dig;
    //printf("%d   ",num);
    for(int i=1;i<count;i++)
    {
        last_dig=last_dig*10;
    }
    //printf("%d \n",last_dig);
    reverse=revles(num,count);
    reverse=revles(reverse,count);
    //printf("%d \n",reverse);
    printf("the swapped number first and last is : %d\n",last_dig+reverse);
    return 0;
}

int revles(int mainnum, int coun)
{
    int i,reverse=0,last;
    for(i=1;i<coun;i++)
    {
        last=mainnum %10;
        reverse= (reverse *10) + last;
        mainnum =mainnum / 10;
    }
    return reverse;
}
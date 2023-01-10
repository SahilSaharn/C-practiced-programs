#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long int num;
    printf("enter your binary number:");
    scanf("%ld",&num);
    long int num_copy;
    num_copy= num;
    while(num_copy != 0){
        int last= num_copy % 10;
        if(last > 1 || last< -1){
            printf("enter a valid binary number\n");
            break;
        }
        num_copy /= 10;
    }//this will check does user enter a valid number or not ...
    num_copy=num;
    long int num2=0;
    while( num_copy != 0){
        int last = num_copy % 10;
        if(last == 1){   last = 0;}
        else { last =1;}
        num2= (num2 * 10) + last;
        num_copy /= 10;
    }
    


    return 0;
}
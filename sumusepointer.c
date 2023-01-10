//in this program we will add two numbers using pointers

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b, sum;
    int *num1, *num2;
    //at line 9 we declaerd two pointers num1 & num2 of int type
    num1 = &a;
    num2 = &b;
    //at this we passed the adress of a and b to pointers using address of operator like scanf
    printf("ENTER TWO NUMBERS...\n");
    scanf("%d %d", num1, num2);
    //if we have to use adress of a &b we can use pointer without * symbol
    //if we have to use or change the contents of a &b then we have to use * symbol
    //likw:-
    sum = *num1 + *num2;
    printf("THE SUM OF %d AND %d = %d\n", *num1, *num2, sum);
    return 0;
}

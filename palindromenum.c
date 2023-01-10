//the palindrome no is the number = to its reverse
//example= 1551=its reverse(1551) thats a palindrome no.

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int x, z, s;
    int y = 0;
    //to get desired outputintialize y =0//
    printf("Enter A Number You Want To Reverse\n");
    scanf("%d", &x);

    s = x; /*make sure to put your enter no in some oher variable to check for palindrome
  and use in loop instead of your enter num variable*/

    while (s != 0)
    { //loop STARTS...
        z = s % 10;
        y = (y * 10) + z;
        s = s / 10;

    } //LOOP ENDS...

    printf("The reverse is %d\n", y);
    if (y == x)
    {
        printf("The Number Is PALINDROME...\n");
    }
    else
    {
        printf("The Number is Not PALINDROME\n...");
    }

    return 0;
} //INT CLOSING

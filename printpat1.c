//this program will give us prnt square of any number we enter ...***...
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a, b, c;
    printf("ENTER HOW MANY LINES DO YOU WANT\n");
    scanf("%d", &a);   
    for (b = 1; b <= a; b++){

        for (c = 1; c <= a; c++)
        {
            printf(" * ");
        }
        
        printf("\n");
    }
    return 0;
}

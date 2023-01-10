#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    char first ,second, third,offer1,offer2;
    scanf("%d",&test);
    while(test)
    {
        scanf("\n%c %c %c",&first,&second,&third);
        scanf("\n%c %c",&offer1,&offer2);

        if(first == offer1 || first == offer2)
        {
            printf("%c\n",first);
        }
         
        else if(second == offer1 || second == offer2)
        {
            printf("%c\n",second);
        }

        else if(third == offer1 || third == offer2)
        {
            printf("%c\n",third);
        }
        test--;
    }
    return 0;
}

//submitted...
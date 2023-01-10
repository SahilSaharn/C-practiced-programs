#include<stdio.h>
#include<string.h>
#include<math.h>

enum colors
{
    black=10 , blue , green , red , yellow , orange , lime 
    //as here we intialzed the first element with 10 so this will increment by 1 for other elements as we preccedd.
    //and blue =11 , green = 12 and simuntaneously lime = 16.. automatically...

    //if we not intialize any element it will start from 0 and preceed by one by defalut...
};
int main()
{
    printf("%d\n",lime);
    printf("%d",lime);
    return 0;
}

// what we learnt ..
// that enum cant be intialized in main ...
// that the will precced by one if we intialized any eleemnt prevoius them ...
// if we made no intialization it will start from 0 by defaoult...
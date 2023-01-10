#include<stdio.h>
#include<string.h>
#include<math.h>
#define num 3
//only if condition is true only that much code will be send for compilation 
int main()
{
    #if num == 2
        printf("true\n");

    #else 
        printf("false\n");

    #endif
    printf("%d\n",__INT_MAX__);
    return 0;
}
// if ese if tested
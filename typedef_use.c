    // typedef is a keyword used to give alternating name to alredy existing dtatatypes
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    typedef unsigned long extra_int;
    // \\we deifnedd a new name to unsigned long dattatype to extra_int 

    extra_int x,y,z;

    x = 99;
    y = 839025;
    z = 384759;

    printf("%ul",y);
    return 0;
}
// basicazllay we rename a datatype to a convenient name to use easily ...
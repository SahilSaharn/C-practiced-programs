#include<stdio.h>
#include<string.h>
#include<math.h>

struct data_new
{
    int roll;
    char gen;
};

int main()
{
    typedef struct data_new jok;
    // here we renanme the structure data type to jok ass new data type name ...

    jok a,b;
    //here we declared the jok type variable and jok is our structure and we renamed it by jok ...

    a.roll= 25;
    b.roll = 89;

    printf("%d = a, %d = b",a.roll,b.roll);
    return 0;
}
//completed...
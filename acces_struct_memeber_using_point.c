#include <stdio.h>
#include <string.h>
#include <math.h>

struct hon
{
    int roll;
    char name[20];
};

int main()
{
    struct hon x;
    struct hon *sptr; // we declared a pointer of same data type to point a structure data type variable...

    x.roll = 20;
    gets(x.name); // intialized the structure variable...

    sptr = &x; // intialized the structure pointer by the address of structure variable...

    // we will acces the memeber by using arrow opretor " -> " in syntax "pointer nmae -> member to access"...

    printf("roll number = %d\n", sptr -> roll);
    printf("the name is = %s\n", sptr -> name);

    // here we access the dont have to provide the variable name bcoz a pointer is pointing to a varaiable we just
    // give the pointer & arrow operator and the member bname which we have to access ...

    return 0;
}
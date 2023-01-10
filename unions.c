#include<stdio.h>
#include<string.h>
#include<math.h>
typedef union d_a_t_a d;

union d_a_t_a
{
    int ohyeah;
    float nem;
    char noyeah;
};

int main()
{
    d a;
    scanf("%d" , & a.ohyeah);
    printf("int = %d , char = %d , float = %d , d_a_t_a = %d\n",sizeof(int),sizeof(char),sizeof(float),sizeof(d));
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>

union kick
{
    int a;
    char b;
    float c;
};

typedef union kick k;
int main()
{
    k var;
    var.b = 'H';
    printf("%c = char\n",var.a);
    printf("%c = char\n",var.b);
    var.c = 1212.67;
    printf("%.2f = char\n",var.c);
    return 0;
}
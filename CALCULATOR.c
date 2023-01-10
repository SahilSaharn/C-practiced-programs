#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    char selector;
    int cont;
    float a, b, c, d, e, f;

    printf("Welcome To The Calculator\n");

    printf("NOTE:- ENTER ALPHABET IN CAPITAL FORM\n");
    printf(" ENTER [A] FOR ADD\n ENTER [S] FOR SUBTRACTION\n ENTER [Q] FOR QUADRATIC EQUATION SOLVER\n ENTER [T] FOR AREA & PERIMETER OF TRIANGLE\n ENTER [R] FOR ROOT OF A NUMBER\n ENTER [J] FOR TO FIND AREA OF SQUARE\n");
    scanf("%c", &selector);

    switch (selector)
    {
    case 'A':
    {
        printf("ENTER 1st No.\n");
        scanf("%f", &a);
        printf("ENTER 2nd No.\n");
        scanf("%f", &b);
        printf("Answer is %.2f", a + b);
        break;
    }

    case 'S':
    {
        printf("ENTER 1st No.\n");
        scanf("%f", &a);
        printf("ENTER 2nd No.\n");
        scanf("%f", &b);
        printf("Answer is %.2f", a - b);
        break;
    }
    case 'Q':
    {
        printf("Enter a\n");
        scanf("%f", &a);
        printf("Enter b\n");
        scanf("%f", &b);
        printf("Enter c\n");
        scanf("%f", &c);

        d = (b * b) - (4 * a * c);
        d = sqrt(d);
        e = (b * -1) + d;
        e = (e / 2 * a);
        printf("ONE VALUE IS = %.2f\n", e);

        e = (b * -1) - d;
        e = (e / 2 * a);
        printf("ANOTHER VALUE IS = %.2f\n", e);
        break;
    }
    case 'T':
    {
        printf("Enter dimensions Of triangle a,b,c in terms of cms\n");
        printf("Enter a\n");
        scanf("%f", &a);
        printf("Enter b\n");
        scanf("%f", &b);
        printf("Enter c\n");
        scanf("%f", &c);
        d = a + b + c;
        printf("The Perimeter is %.2f", d);
        e = d / 2;
        f = e * (e - a) * (e - b) * (e - c);
        f = sqrt(f);
        printf("THE AREA IS %.4f cm's\n ", f);

        break;
    }
    case 'R':
    {
        printf("Enter A Number You Want Root Of\n");
        scanf("%f", &a);
        printf("%.4f This is Answer...\n", sqrt(a));
        break;
    }
    case 'J':
    {
        printf("ENTER A NUMBER YOU WANT TO FIND AREA\n");
        scanf("%f", &a);
        printf(" THE AREA OF SQUARE IS %.4f mm", a * a * 10);
        break;
    }
    }

    return 0;
}
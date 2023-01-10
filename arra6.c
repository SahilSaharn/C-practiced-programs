#include <stdio.h>
#include <math.h>

int main()
{

    int araa[3];
    int a, b, c;
    printf("ENTER 3 NUMBERS\n");
    for (a = 0; a < 3; a++)
    {
        scanf("%d", &araa[a]);
    }
    printf("ENTER A NUMBER YOU WANT TO CHECK\n");
    scanf("%d", &b);
    for (a = 0; a < 3; a++)
    {
        if (araa[a] == b)
        {
            c = 100;
        }
    }
    if (c == 100)
    {
        printf("IT IS PRESENT\n");
    }
    else
    {
        printf("IT IS NOT PRESENT\n");
    }
    return 0;
}

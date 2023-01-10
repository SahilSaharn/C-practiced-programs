//problem:- boxes through a tunnel of C...

#include <stdio.h>

int main()
{
    int numbox, b, c, j;

    scanf("%d", &numbox);
    int hieght[numbox], breadth[numbox], width[numbox];
    j = 1;
    for (b = 0; b < numbox; b++)
    {

        printf("Enter values in this format:-\n HIEGHT X BREADTH X WIDTH (OF BOXES)\n");
        printf("ENETR THE VALUES OF %d BOX\n", j);
        scanf("%d", &hieght[b]);
        scanf("%d", &breadth[b]);
        scanf("%d", &width[b]);
        j++;
    }
    for (c = 0; c < numbox; c++)
    {
        if (hieght[c] < 41)
        {
            printf("%d\n", hieght[c] * breadth[c] * width[c]);
        }
    }

    return 0;
}

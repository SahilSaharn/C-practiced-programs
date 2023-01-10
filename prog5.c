//program to find a element and replace it...

#include <stdio.h>
int main()
{
    int a, i, search, o, dee, repac;

    printf("enter the size of array\n");
    scanf("%d", &a);
    int jump[a];
    for (i = 0; i < a; i++) //loop to take inputs in our array....
    {
        printf("enter your numbers:");
        scanf("%d", &jump[i]);
    }
    printf("enter the number you want to search...\n");
    scanf("%d", &search);
    o = 0;
    for (i = 0; i < a; i++) //loop for finding the position of element in array...
    {
        if (search == jump[i])
        {
            printf("its position is %d in array= jump[%d]\n", i, i);
            o++;
            break;
        }
    }
    if (o == 0)
    {
        printf("your number %d is not present...\n", search);
    }
    else
    {
        printf("would you like to replace it if:-\nYES! then enter [1]\nNO! then enter[0]\n");
        scanf("%d", &dee);
    }
    if (dee == 1)
    {
        printf("enter the number you want to replace with %d:", jump[i]);
        scanf("%d", &jump[i]);
        printf("TASK DONE...\n");
        printf("enter 1 to get a printed array or enter any other number to exit\n");
        scanf("%d", &repac);
        printf("HERE's YOUR NEW MATRIX\n--------\n");
        if (repac == 1)
            for (i = 0; i < a; i++)
            {
                printf("%d\n", jump[i]);
            }
    }
    else
    {
        printf("bye...\n");
    }
}
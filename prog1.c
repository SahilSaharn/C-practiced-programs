#include <stdio.h>

int main()
{
    int store1, loki, count=0, b;
    printf("ENTER THE SIZE OF ARRAY YOU WANT\n");
    scanf("%d", &store1);
    int aarry[store1];
    int aarry2[store1];
    printf("enter your numbers now\n");

    for (loki = 0; loki < store1; loki++)
    {
        scanf("%d", &aarry[loki]);
    }
    for (loki = 0; loki < store1; loki++)
    {
         aarry2[loki]=aarry[loki];
      
    }
    printf("THE NUMBER OF DUPLICATE ITEMS ARE %d\n", count);

    return 0;
}
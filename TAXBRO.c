#include<stdio.h>
int main()

{
    int tax;
    printf("ENTER YOUR ANNUAL INCOME IN ORDER TO KNOW TAX PERCENTAGE\n");
    scanf("%d",&tax);
    printf("SO THIS IS YOUR INCOME %d/-\n",tax);
    
    if (tax>=100000)
    {
        printf("YOU WILL PAY 40 PERCENT TAX\n");
        printf("YOUR TAX AMONUT IS %d\n",(tax*40)/100);
    }
    
    else if (tax>70000)
    {
        printf("YOU WILL PAY 30 PERCENT TAX\n");
        printf("YOUR TAX AMONUT IS %d\n",(tax*30)/100);        
    }
    
    else if (tax>=50000)
    {
        printf("YOU WILL PAY 20 PERCENT TAX\n");
        printf("YOUR TAX AMONUT IS %d\n",(tax*20)/100);        
    }

    else
    {
        printf("YOU WILL PAY 10 PERCENT TAX\n");
        printf("YOUR TAX AMONUT IS %d\n",(tax*10)/100);       
    }     
    

    printf("BYE! HAVE A NICE DAY\n");
    return 0;
}
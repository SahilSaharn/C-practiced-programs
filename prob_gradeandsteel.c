#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int hardness,tensile_stenght,test;
    float carbonc;
    int conc1,conc2,conc3;
    
    scanf("%d",&test);
    while(test--)
    {
        conc1=conc2=conc3=0;
        scanf("%d %f %d",&hardness,&carbonc,&tensile_stenght);
        //printf("%d %.2f %d ",hardness,carbonc,tensile_stenght);
        if(hardness>50){ conc1++; }

        if(carbonc<0.7){ conc2++;}
        
        if(tensile_stenght>5600){conc3++;}


        if(conc1>0&& conc2>0 && conc3>0)
                printf("10\n");

        else if(conc1>0 && conc2>0)
                printf("9\n");    

        else if(conc2>0 && conc3>0)
                printf("8\n");  

        else if(conc1>0 && conc3>0)
                printf("7\n");  

        else if(conc1>0 || conc2>0|| conc3>0)
                printf("6\n");

        else
                printf("5\n");
    }

    return 0;
}
/*Hardness of the steel must be greater than 50
Carbon content of the steel must be less than 0.7
Tensile strength must be greater than 5600
The grades awarded are as follows:

Grade is 10 if all three conditions are met
Grade is 9 if conditions (1) and (2) are met
Grade is 8 if conditions (2) and (3) are met
Grade is 7 if conditions (1) and (3) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the three conditions are met
Write a program to display the grade of the steel, based on the values of hardness
, carbon content and tensile strength of the steel, given by the user. */
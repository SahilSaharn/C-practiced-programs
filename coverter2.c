#include<stdio.h>
int main()
{//code starts from here 
char a;
float x;
float km_to_meters = 1000;
float foot_to_cms = 30.48;
float liters_to_ml = 1000;
float km_to_miles = 0.621371;

while (1)
{
    printf("CHOOSE A CONVERTER BY NO. OR PRESS q TO QUIT\n  1.km_to_meters\n  2.foot_to_cms\n  3.liters_to_ml\n  4.km_to_miles\n");
    scanf("%c",&a);

    switch (a)
    {
    case 'q':
          printf("BYE!\n");
        goto end;
        break;

    case '1':
        printf("ENTER UNIT IN TERMS OF KM'S\n");
        scanf("%f",&x) ; 
        printf("%.2f KM'S ARE %.2f METERS\n",x,x*km_to_meters);
        break;

    
    case '2':
        printf("ENTER UNIT IN TERMS OF FOOT\n");
        scanf("%f",&x) ; 
        printf("%.2f FOOT ARE %.2f CM'S\n",x,x*foot_to_cms);
        break;

    case '3':
        printf("ENTER UNIT IN TERMS OF LITRES\n");
        scanf("%f",&x) ; 
        printf("%.2f LITRES ARE %.2f ML\n",x,x*liters_to_ml);
        break;

    case '4':
        printf("ENTER UNIT IN TERMS OF KM'S\n");
        scanf("%f",&x) ; 
        printf("%.2f KM'S ARE %.2f MILES\n",x,x*km_to_miles);
        break;


    default:
           printf("SORRY! ENTER A VALID NUMBER.\n");
        break;
    }
    
}
end:
    return 0;
}
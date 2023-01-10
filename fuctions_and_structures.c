#include<stdio.h>
#include<string.h>
#include<math.h>

// using fuction with structure ass arguments and return type

struct dist 
{
    int inches,feet;
};

struct dist add_inche_feet(struct dist one , struct dist two)
{
    struct dist sum;
    sum.inches = one.inches + two . inches;
    sum. feet = one.feet + two .feet;

    return sum;


}

int main()
{
    struct dist a,b;
    printf("enter the feet:");
    scanf("%d",&a.feet);
    printf("enter the inches:");
    scanf("%d",&a.inches);
    printf("enter the feet:");
    scanf("%d",&b.feet);
    printf("enter the inches:");
    scanf("%d",&b.inches);

    struct dist new =add_inche_feet(a,b);

    printf("feet add  = %d\n",new.feet);
    printf("inches add  = %d\n",new.inches);
    
    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>

// created a array of structure variable...

struct stus
{
    char name[10];
    int age;
    int rollno;
};


int main()
{
    struct stus student[5];
    for(int i =0 ;i<5 ;i++)
    {
        printf("enter the name of %d student:-",i+1);
        scanf("%s",student[i].name);

        printf("enter its age :");
        scanf("%d",&student[i].age);

        printf("enter its roll no.:");
        scanf("%d",&student[i].rollno);
        
        printf("\n");
    }//inputing the info..

    for(int i =0 ;i<5 ;i++)
    {
        printf(" the name of %d student:-",i+1);
        printf("%s\n",student[i].name);

        printf(" its age :");
        printf("%d\n",student[i].age);

        printf(" its roll no.:");
        printf("%d\n",student[i].rollno);  
        printf("\n");
    }
    return 0;
}
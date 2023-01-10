#include<stdio.h>
#include<string.h>
#include<math.h>
// demonstrating stucture...
struct stt
{
    int marks;
    char name[10];
};

int main()
{
    struct stt student1,student2,student3;
    //studen1 turn..

    scanf("%s",student1.name);
    scanf("%d",&student1.marks);
    printf("student 1 = %s\n",student1.name);
    printf("and its marks are : %d\n",student1.marks);

    scanf("%s",student2.name);
    scanf("%d",&student2.marks);   
    printf("student 2 = %s\n",student2.name);
    printf("and its marks are : %d\n",student2.marks);

    scanf("%s",student3.name);
    scanf("%d",&student3.marks);   
    printf("student 3 = %s\n",student3.name);
    printf("and its marks are : %d\n",student3.marks);

    return 0;
}
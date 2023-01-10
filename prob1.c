#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--)
    {
        int no_of_students,scan_studenst,count=0;
        scanf("%d %d",&no_of_students,&scan_studenst);
        while(no_of_students>0)
        {
            no_of_students-=scan_studenst;
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
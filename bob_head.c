#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test_cases,size,i;
    int no;
    char str[100];
    scanf("%d",&test_cases);
    while(test_cases--)
    {
        
        scanf("%d",&size);//input the size of string...
        for(i=0;i<size;i++)//input the string...
        {
            scanf("%c",&str[i]);
        }
        for(i=0,no=0;i<size;i++)
        {
            if(str[i]=='I')
            {
                printf("INDIAN\n");
                break;
            }
            else if(str[i]=='Y')
            {
                printf("NOT INDIAN\n"); break;
            }
            else{
                no++;
            }
        }
        if(no==size)
        {
            printf("NOT SURE\n");
        }
    }
    return 0;
}
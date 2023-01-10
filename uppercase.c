#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter the size");
    scanf("%d\n",&size);
    char sss[size];
    gets(sss);
    for(int i=0;i<size;i++)
    {
        if(sss[i]==' ')
        {
            size++;
        }
        else if(sss[i]>='A' && sss[i]<='Z')
        {
            sss[i]+=32;
        }
    }
    puts(sss);
    printf("\n");
    return 0;
}
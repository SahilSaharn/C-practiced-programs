#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int cone = 0 , czero = 0;
        for(int i=0 ;i< n; i++)
        {
            if(str[i] == '1'){
                cone++;
            }
            else{
                czero++;
            }

        }//this will give us the counts of both zeros and ones

        if(cone < 2 || czero <2){
            printf("0\n");
        }
        else{

            if(cone < czero){
                printf("%d\n",cone-1);
            }
            else{
                printf("%d\n",czero-1);
            }

        }

    }
    return 0;
}
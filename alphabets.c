#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char jeff_can_read[26];
    int test,i,a,b,j;
    gets(jeff_can_read);
    scanf("%d",&test);
    while (test--)
    {
        char word[20];
        scanf("%s",word);
        int count[strlen(word)];
        for(i=0;i<strlen(word);i++)
        {
            count[i]=0;
        }
        for(i=0;i<strlen(word);i++)
        {
            for(j=0;j<strlen(jeff_can_read);j++)
            {
                if(word[i]==jeff_can_read[j])
                {
                    count[i]++;
                }
            }
        }
        b=1;
        for(i=0;i<strlen(word);i++)
        {
            if(count[i]==0){  b=0; }
        }

        if(b==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }

    }
    
    return 0;
}
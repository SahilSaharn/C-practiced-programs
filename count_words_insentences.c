#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int size,count_space=0;
    printf("enter the size of sentence:");
    scanf("%d", &size);
    char str[size];
    printf("enter your string\n");
    fflush(stdin);
    gets(str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count_space++;
        }
    }
    printf("the words are %d\n",count_space+1);

    return 0;
}

//completed...
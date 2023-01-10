#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size;
    printf("enter size of your string youwant to decode:");
    scanf("%d",&size);
    char str_d[size];
    printf("enter the string you want to decode:");
    scanf("%s",str_d);
    int key_size = strlen(str_d);
    int key[key_size];
    printf("enter the key:-\n");
    for(int i=0 ; i<key_size;i++){
        scanf("%d",&key[i]);
    }
    printf("decoding.....\n");
    printf("result: ");
    for(int i=0 ; str_d[i]!='\0' ;i++){
        printf("%c",str_d[i]-key[i]);
    }
    printf("\n");
    return 0;
}
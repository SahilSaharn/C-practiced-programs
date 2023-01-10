#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand (time(NULL));
    //generating any random key for encryption...
    int size ;
    printf("enter the size:");
    scanf("%d",&size);
    
    printf("enter the string you want to encrpt:");
    char str[size];
    scanf("%s",str);
    int key [strlen(str)];
    for(int i=0 ;str[i]!='\0';i++){
        key[i] = (rand() % 40)+1;
    }

    for(int i=0 ;str[i] !='\0' ;i++){
        str[i]+=key[i];
    }//encrypted...

    printf("encrypted string :%s\n",str);
    printf("every element has its own encryption key simuntaneously:\n ");
    for(int i=0 ; i<strlen(str);i++){
        printf("%d  ",key[i]);
    }
    printf("\n");
    
    return 0;
}
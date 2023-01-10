#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int a);
int main()
{
    int le,ri,ko,i;
    printf("enter your range \nNOTE:range must be in positive number\n");
    printf("from:");scanf("%d",&le);
    printf("to:");scanf("%d",&ri);
    for(i=le;i<=ri;i++){
        ko=prime(i);
        if(ko==(i-2)){
            printf("%d  ",i);
        }
    }
    return 0;
}

int prime(int a)
{
    int ii,prime=0;
    /*if(a==1){prime=1;
        prime=(1-2);
        return prime;
    }*/
    for(ii=2;ii<a;ii++){
        if(a%ii!=0){
            prime++;
        }
    }
    return prime;
}
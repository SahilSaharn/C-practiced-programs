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
        int i,k,code_posi,chef_posi;
        chef_posi = code_posi = -1;
        for(i=0 , k=3 ; k<strlen(str);k++,i++){
            if(str[i]=='c' && str[i+1]=='h' && str[i+2]=='e' && str[k]=='f'){
                chef_posi = k;
                break;
            }
        }
        for(i=0 , k=3 ; k<strlen(str);k++,i++){
            if(str[i]=='c' && str[i+1]=='o' && str[i+2]=='d' && str[k]=='e'){
                code_posi = k;
                break;
            }
        }
        //printf("%d %d\n",chef_posi,code_posi);

        if(code_posi == -1 || chef_posi==-1 ){
            printf("WA\n");
        }
        else if(code_posi < chef_posi){
            printf("AC\n");
        }
        else{
            printf("WA\n");
        }

    }
    return 0;
}
// submitted...
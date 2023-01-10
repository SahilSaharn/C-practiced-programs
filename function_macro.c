
#define PRINTARR(size,arr) for(int i=0; i<size ;i++){\
                                printf("%d  ",arr[i]);\
                            }


void sum(int a,int b){
    printf("%d is the sum \n",a+b);
}
int main()
{
    int a;
    printf("enter the size:");
    scanf("%d",&a);
    int array[a];
    for(int i=0 ; i<a ;i++){                                
        scanf("%d",&array[i]);
    }

    PRINTARR(a,array);

}
//macro to print array elements ...

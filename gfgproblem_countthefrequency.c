#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int size,i,occ,count=0;
    printf("enter the size of array you want:-");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the number you want to find the occurence of:");
    scanf("%d",&occ);
    for(i=0;i<size;i++){
        if(a[i]==occ){ count++;}
    }
    printf("the number %d occurs %d time\n",occ,count);
    return 0;
}
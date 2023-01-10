#include<stdio.h>
#include<string.h>
#include<math.h>
void sort (char [], int );
int main()
{
    int size,i,j;
    printf("enter size:");
    scanf("%d",&size);
    // step 1:- we will create a copy of main string'''
    char main_str[size],copy_str[size];
    printf("enter the string:");
    scanf("%s",main_str);
    for(i=0;i<size;i++){
        copy_str[i]=main_str[i];
    }//this loop will copy the main_str to copy_str...
    //step 2:- we have to sort the copy_str in aphabeatical order in order to get all unique elements...
    //we used a used defined sort function( bubble sort)...
    sort(copy_str,size);
    //puts(copy_str);
    //our copy_str is now sorted...
    //step 3:- we have to remove the duplicate elements and just have unique ones by a simple algo we will take
    //another array we will check that the element is not equal to the element next to it and we store it in new array...
    char unique_ele[size];
    int unique_count=0;
    for(i=0;i<size;i++){
        if(copy_str[i]!= copy_str[i+1]){
            unique_ele[unique_count]=copy_str[i];
            unique_count++;
        }
    }
    unique_ele[unique_count]=copy_str[size-1];
    printf("the unique elements present are :-");
    for(i=0;i<unique_count;i++){printf("%c   ",unique_ele[i]);} printf("\n");
    //printf("\n%d",unique_count);
    //now we have the unique elements and now we will create a count array of unique elements size to store their
    //count in main str and display everyone of their count... 
    int count[unique_count];
    for(i=0;i<unique_count;i++){    count[i]=0;     }//intialize count array by 0 to store correct count...
    //now we will binary search and calculate the count...
    for(i=0;i<unique_count;i++)
    {
        for(j=0;j<size;j++)
        {
            if(unique_ele[i]==main_str[j]){
                count[i]++;
            }
        }
    }
    for(i=0;i<unique_count;i++)
    {
        printf(" %c count== %d\n",unique_ele[i],count[i]);
    }
    //in order to find maximum  count number we have get the position of the maximum count in unique element array
    int max_count=0,max_cout_posi;
    for(i=0;i<unique_count;i++)
    {
        if(max_count<count[i]){
            max_count=count[i];
            max_cout_posi=i;
        }
    }
    printf("the maximum frequency character is [%c] with count = [%d]\n",unique_ele[max_cout_posi],max_count);
    return 0;
}

void sort (  char str[], int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if( str[j]> str[j+1])
            {
                str[j]   =str[j] ^ str[j+1];
                str[j+1] =str[j] ^ str[j+1];
                str[j]   =str[j] ^ str[j+1];
            }
        }
    }
}
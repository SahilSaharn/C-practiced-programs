#include<stdio.h>
#include<string.h>
#include<math.h>

void print_stat()
{
    static int h ;
    //it willl automatically intialized to 0
    printf("the static var value = %d\n",h);
    h++;
}

int main()
{
    print_stat();  // it is calling function which will print h value get intialized by 0 andd print it
    print_stat();  // in second call we incremented the value in prevoius call and it will remind that and printf the value
    //and incrment it
    print_stat();   //in third call it will go same as second call it will remid the value and print 
    return 0;
}
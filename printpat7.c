#include<stdio.h>
int main()
{       

    int totalrow,loop1,loop2,juke;
       printf("ENTER NO. ROWS YOU WANT\nNOTE:-PLEASE ENTER A Odd NUMBER\n");
       scanf("%d",&totalrow);
        juke=(totalrow+1)/2;
      
       for(loop1=1;loop1<=totalrow;loop1++)
       {

            for(loop2=1;loop2<=totalrow;loop2++)
            {
                if(loop2==juke||loop1==juke)
                {
                    printf(" * ");
                }

                else
                {
                   printf("   ");
                }
                

            }



           printf("\n");
       }





    return 0;
}
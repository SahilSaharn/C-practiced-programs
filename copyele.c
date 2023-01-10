#include<stdio.h>
int main()
{
      int copye[4]={1,2,3,4};
      int copyc[4];
      int i,j;
      for (int i = 0; i < 4; i++)
      {
          copyc[i]=copye[i];
      }
      
      j=0;
      while (j<4)
      {
          printf("%d\n",copyc[j]);
          j++;
      }
       



}
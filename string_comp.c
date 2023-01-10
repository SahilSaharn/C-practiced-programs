//this program is to compare two strings and find grater one and equal without strcmp()function
//READ DOWN THE COMMENTS IT WILL EXPLAIN TO YOU ... BYE !!!
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s1[100],s2[100];
    int i,count=0;
    printf("enter string (s1):");
    gets(s1); 
    printf("enter string (s2):");
    gets(s2);
    //length is the most important point to be noted down first...
    if(strlen(s1)!=strlen(s2))//first we will check the lenght of strings if not equal we will find greater one and print it is greater...
    {
        if(strlen(s1)>strlen(s2))
        { printf("s1 is greater \n");}
        else{ printf("s2 is greater \n");}
    }
    else//if there length is same simply this else block will get executed 
    {
        for(i=0;i<strlen(s1);i++)//by this for loop we will compare element on by one by another string...
        {
            if(s1[i]==s2[i]){ count++;}//if the every element is same the count value will be equal to it ...
        
            else//if any word is not equal simply this else will check which is bigger and print the winning string character and break the loop...
            {
                if(s1[i]>s2[i]){ printf("s1 is greater \n");}
                else{ printf("s2 is greater \n");}
                break;
            }

        }
        if(count==strlen(s1)){ printf("ohooo! strings are equal\n");}//this case is for count value is equal to string lenght then it must be equal...
    }
    

    return 0;
}
#include<stdio.h>
#include<string.h>
#include<math.h>
int arraymulti(int []);
int main()
{
    int arr1[3][3];
    printf("enter the elements of matrix--\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0 ;j<3 ;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }//inputed the array...

    int a[4],x,y,z;
    int po2=0;

    for(int i=0 ;i<3 ;i++)
    {
        for(int j=0 ;j<3 ;j++)
        {
            if( i != 0 && j != 0)
            {
                a[po2]= arr1[i][j];
                po2++;
            }
        }

    }
    x = arraymulti(a) * arr1[0][0];
    //x is calculated...

    po2=0;

    for(int i=0 ;i<3 ;i++)
    {
        for(int j=0 ;j<3 ;j++)
        {
            if( i != 0 && j != 1)
            {
                a[po2]= arr1[i][j];
                po2++;
            }
        }

    }
    y = arraymulti(a) * arr1[0][1];
    //y is calculated...

    po2=0;

    for(int i=0 ;i<3 ;i++)
    {
        for(int j=0 ;j<3 ;j++)
        {
            if( i != 0 && j != 2)
            {
                a[po2]= arr1[i][j];
                po2++;
            }
        }

    }
    z = arraymulti(a) * arr1[0][2];

    int ans = x - y + z;
    printf("the matrix determinat is |A| = %d\n",ans);
    return 0;
}

int arraymulti(int ar[])
{
    int det = (ar[0] * ar[3]) - (ar[1] * ar[2]);
    return det;
}

//completed ...
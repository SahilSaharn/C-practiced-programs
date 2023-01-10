//LEARN INPUT AND OUTPUT IN C++...
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
        int n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i]>>b[i];
        }
       // clrscr();
       // cout<<"X\tY\tTotal\tResult"<<endl;
        for(i=0;i<n;i++)
        {
           // cout<<a[i]<<"\t"<<b[i]<<"\t"<<a[i]+2*b[i]<<"\t";
            if((a[i]+2*b[i])%2==0)
            {
                cout<<"yes"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
        return 0;
}

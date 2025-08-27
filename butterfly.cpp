#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,n=4;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
        cout<<"*";
        }
        if(i!=n-1)
        {
            
                for(j=0;j<2*(n-2-i)+2;j++)
                {
                    cout<<" ";
                }
            
        }
        for(k=0;k<i+1;k++)
        {
            cout<<"*";
        }
        {

        }
         cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        if(i!=0)
        {
            for(k=0;k<2*i;k++)
            {
                cout<<" ";
            }
        }
        for(l=0;l<n-i;l++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
   
    return 0;
}
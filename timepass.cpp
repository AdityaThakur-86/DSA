#include <iostream>
using namespace std;
int main ()
{
    int n=5,i,j,k,l;
    for(i=0;i<n;i++)
    {
       cout<<"*";
    }
    cout<<endl;
    for(i=0;i<n-2;i++)
    {
        cout<<"*";
        for(j=0;j<n-2;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }
        for(i=0;i<n;i++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    return 0;
}
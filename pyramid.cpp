#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,l,n=4;
    for(i=0;i<n;i++)
    {
        
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
         int num=1;
    for(k=1;k<=i+1;k++)
    {
        cout<<num;
        num++;
    }  
    for(l=i ; l>0;l--)
    {
        cout<<l;
    }
    cout<<endl;  
    }
    return 0;
}
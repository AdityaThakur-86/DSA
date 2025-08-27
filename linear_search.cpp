#include<iostream>
using namespace std;
int main ()
{
    int n,i,a[10],position,value;
    cout<<"enter a number of element";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"value to be searched";
    cin>>value;
    for(i=0;i<=n;i++)
    {
        if(a[i]==value)
        {
            position=i+1;
            break;

        }
    }
    if(position!=0)
    {
        cout<<"position is"<<position<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    
    }
    return 0;
}
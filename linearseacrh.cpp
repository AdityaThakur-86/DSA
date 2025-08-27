#include <iostream>
using namespace std;
int main ()
{
    int a[10],i,n,num,pos=-1;
    cout<<"Number of element to be entered : ";
    cin>>n;
    cout<<"elements are : ";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter value to be searched : ";
    cin>>num;

    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            pos=i+1;
        }
    }
    if(pos==-1)
    {
        cout<<"NOT FOUND !!";
    }
    else
    {
        cout<<"Position is : "<<pos;
    }

    return 0;
}
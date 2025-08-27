#include <iostream>
using namespace std;
int main ()
{
    int i,a,b,c;
    cout<<"enter first no"<<endl;
    cin>>a;
    cout<<"enetr second no"<<endl;
    cin>>b;
    cout<<"enter third no"<<endl;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a;
        }
        else{
            cout<<c;
        }


    }
    else if (c<b) 
    {
        cout<<b;
    }
    else 
    {
        cout<<c;
    }
    return 0;

}
#include <iostream>
using namespace std;
int main ()
{
    int n,i;
    cout<<"enter a number";
    cin>>n;
    for(i=2 ; i<=n-1;i++)
    {
        if (n%i!=0)
        {
            cout<<"prime";
            break;
        }
        else 
        {
            cout<<"non prime";
            break;
        }
    }
    return 0;
}
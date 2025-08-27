#include <iostream>
using namespace std;
int main ()
{
    int i,n1,n2,sum=0;
    cout<<"enter a number : "<<endl;
    cin>>n1;
    cout<<"enter a number : ";
    cin>>n2;
    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
        {
          sum=sum+i  ;
        }
        
    }
    cout<<sum;
    return 0;
}
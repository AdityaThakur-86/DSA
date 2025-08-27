#include <iostream>
using namespace std;
int main ()
{
    int ans=0,n=5,rem,pow=1;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        ans=ans+rem*pow;
        pow=pow*10;
        
        
    }
    cout<<ans;
    return 0;
}
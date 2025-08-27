#include <iostream>
using namespace std;
int main ()
{
    int i,n=101,ans=0,rem,pow=1;
    {
        while(n>0){
            rem=n%10;
            ans=ans+rem*pow;
            n=n/10;
            pow=pow*2;

        }
        cout<<ans;
    }
    return 0;
}
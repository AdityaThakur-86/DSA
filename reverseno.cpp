#include <iostream>
using namespace std;
int main ()
{
    int n=521,rem,ans;
    while(n>0)
    {
        rem=n%10;
        cout<<rem;
        n=n/10;
        
    }
    return 0;
}
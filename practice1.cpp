#include <iostream>
using namespace std;
int a=4;
int factN(int n)
{
    int fact=1;

    for(int i=1;i<=n;i++){
        
        fact*=i;

    }
    return fact;
}
int main ()
{
    int a;
    cin>>a;
   cout<<factN(a)<<endl;

    return 0;
}
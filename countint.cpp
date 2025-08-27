#include <iostream>
using namespace std;
int main ()
{
    int i,n=10,a,count=0,rem;
    while(n>0)
    {
        if(n%10>=0)
        { 
           count++;
            n=n/10;
        }
    }
    cout<<"total"<<count;
    return 0;
}
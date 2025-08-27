#include <iostream>
using namespace std;
int fib(int n)
{
    int a=0,b=1,next;
    for(int i=0;i<n;i++)
    {
        cout<<a;
        next=a+b;
        a=b;
        b=next;
    }

}
int main ()
{
    int n=6;
    fib(n);
    
    return 0;
}
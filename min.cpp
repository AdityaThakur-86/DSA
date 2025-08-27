#include <iostream>
using namespace std;
int main ()
{
    int a ,b,min;
    cout<<"enter 1st number :"<<endl;
    cin>>a;
    cout<<"enter 2nd number :"<<endl;
    cin>>b;
    min=(a>b) ? b  : a ;
    cout<<"The Min Number : "<<min<<endl;


    return 0;
}
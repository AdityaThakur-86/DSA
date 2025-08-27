#include <iostream>
using namespace std;
int main ()
{
    int i,j,n=4,num=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<num;
            num++;

        }
        cout<<endl;
    }
    return 0;
}
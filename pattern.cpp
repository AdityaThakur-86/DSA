#include <iostream>
using namespace std;
int main ()
{
    int i,j;
     
    int n=4;
    for(i=0;i<n;i++)
    {
        char ch='A';
       
        for(j=1;j<n+1;j++)
        {
            cout<<' '<<ch;
            ch++;
        }
        cout<<endl;
        
    }
    return 0;
}
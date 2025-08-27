#include <iostream>
using namespace std;
int main ()
{
    int marks[10],n,pos=-1;
    int max=INT16_MIN;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"elements are : ";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]>max)
        {
            max=marks[i];
            pos=i;

            
        }
        
    }
    cout<<max<<endl;
    cout<<pos;
    
    return 0;
}
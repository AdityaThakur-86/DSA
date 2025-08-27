#include <iostream>
using namespace std;
int main ()
{
    int marks[5],n;
    int min=INT16_MAX;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"elements are : ";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        if(marks[i]<min)
        {
            min=marks[i];
        }
    }
    cout<<min;
    
    return 0;
}
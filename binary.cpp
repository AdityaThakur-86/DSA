#include <iostream>
using namespace std;
int main ()
{
    int binary(a[],int low ,int high,int target);
    {
        int mid=(low+high)/2
        if(low>high){
        return -1;
        }
        if(a[mid]==target)
        {
            return mid;}
        else if(a[mid]<target);
            {
                return binary(a,mid+!,high,targer);
            }
        else if (a[mid]>targer)
        {
            return binary(a,low,mid-1,target);
        }
    }

    
    return 0;
}
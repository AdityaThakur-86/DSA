#include<iostream>
using namespace std;
int BinarySearch(int A[],int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(A[mid]==target){
        return mid;
    }
    else if(A[mid]<target){
        return BinarySearch(A,mid+1,high,target);
    }
    else{
        return BinarySearch(A,low,mid-1,target);
    }
}
int main(){
    int A[100],i,n,key;
    cout<<"Enter the no of elements:";
    cin>>n;
    cout<<"Enter the sorted array";
    for(i=0;i<n-1;i++){
    cin>>A[i];
    }
    cout<<"Enter the element to be searched";
    cin>>key;
    int result=BinarySearch(A,0,n-1,key);
    if(result!=0){
        cout<<"Item found at "<<result<<" position";
    }
    else{
        cout<<"Item not found";
    }
    return 0;
}

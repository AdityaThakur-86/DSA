#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
  while(n>=10){
  n=n/10;
count++;
  }
cout<<count<<" ";
    
    return 0;
}
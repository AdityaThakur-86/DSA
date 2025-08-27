#include<iostream>
using namespace std;
class tshirt {
  private:
    const char origin[10]="zara";
    char color[10];
    char neck_type[10];
  public:
    void insert_data(){
        cout<<"enter the color of tshirt :";
        cin>>color;
        cout<<"enter the neck_type of tshirt :";
        cin>>neck_type;}
    void display(){
        cout<<"Origin :"<<origin<<endl;
        cout<<"Color :"<<color<<endl;
        cout<<"Neck_Type :"<<neck_type<<endl;} };
int main(){
    tshirt t1;
    t1.insert_data();
    t1.display();
    return 0;}
#include<iostream>
using namespace std;
class tshirt {
    private:
           char brand[20];                   //data members
           char color[10];
           char neck_type[20];
           char size[10];
    public:
            void insert_data();
            void display(); };
  void tshirt::insert_data () {
            cout<<"enter  the brand of tshirt : ";                    // date functions
            cin>>brand;
            cout<<"enter the color of  tshirt : ";
            cin>>color;
            cout<<"enter the neck_type : ";
            cin>>neck_type;
            cout<<"enter the size of tshirt : ";
            cin>>size; }
  void tshirt::display() {
              cout<<brand<<endl;
                cout<<color<<endl;
                cout<<neck_type<<endl;
                cout<<size<<endl; }          
  int main() {
    tshirt t1;
    t1.insert_data();
    t1.display();
    return 0; }
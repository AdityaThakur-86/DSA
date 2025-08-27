#include<iostream>
using namespace std;
class tshirt
{
    private:
         char brand[20];
         char color[20];
         char neck_type[20];
    public:
         void insert_data()
         {
            cout<<"enter the brand";
            cin>>brand;
            cout<<"enter the color";
            cin>>color;
            cout<<"enter the neck_type";
            cin>>neck_type;
         }
         void display()
        {
            cout<<brand<<endl;
            cout<<color<<endl;
            cout<<neck_type<<endl;
        }     
};
int main()
{
tshirt t1;
t1.insert_data();
t1.display();
return 0;
}
#include <iostream>
using namespace std;

class tshirt {
  private:
    char origin[20];
    char color[10];
    char neck_type[10];
    static int count;   
  public:
    void insert_data() {
        cout << "Enter the origin of tshirt :";
        cin >> origin;
        cout << "Enter the color of tshirt :";
        cin >> color;
        count++;  }
    static void showCount() { 
        cout << "Total T-shirts Entered :" <<count<<endl; } 
    };
int tshirt::count;
int main() {
    tshirt t1, t2;
    t1.insert_data();
    tshirt::showCount();   
    cout << endl;
    t2.insert_data();
    tshirt::showCount();
    return 0; }
#include <iostream>
using namespace std;
class Car {
  private:
    char brand[20];
    char model[20];
    static int count; 
  public:
    void insertData() {
        cout << "Enter Car Brand: ";
        cin >> brand;
        cout << "Enter Car Model: ";
        cin >> model;
        count++;  }
    static void showCount() {
        cout << "Total Cars Entered: " << count << endl; } };
int Car::count;
int main() {
    Car c1, c2; 
    c1.insertData();
    Car::showCount();
    cout<<endl;
    c2.insertData();
    Car::showCount(); 
    return 0;}
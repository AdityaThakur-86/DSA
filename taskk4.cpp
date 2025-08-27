#include <iostream>
using namespace std;
class Car {
  private:
    char brand[20];
    char model[20];
    const int wheels=4;   
  public: 
    void insertData() {
        cout << "Enter Car Brand: ";
        cin >> brand;
        cout << "Enter Car Model: ";
        cin >> model;
    }
    void display() const {
        cout << "Brand : " << brand << endl;
        cout << "Model : " << model << endl;
        cout << "Wheels: " << wheels << endl;
    }
};
int main() {
    Car c1;
    c1.insertData();
    cout << endl;
    c1.display();
    return 0; }
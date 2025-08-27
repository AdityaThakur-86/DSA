#include <iostream>
using namespace std;
class Car {
  private:
    string brand;
    string model;
    int year;
  public:
    Car() {
        brand = "Unknown";
        model = "Unknown";
        year = 0;
        cout << "Using Zero-Argument Constructor:" << endl;
    }
    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
        cout << "Using Parameterized Constructor:" << endl;
    }
    void displayData() {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    Car c1;
    c1.displayData();
    Car c2("bmw", "m5", 2025);
    c2.displayData();
    return 0;
}
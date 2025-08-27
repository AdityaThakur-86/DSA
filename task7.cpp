#include <iostream>
using namespace std;
class Cars {
  private:
    string brand;
    int year;
  public:
    Cars(string b, int y) {
        brand = b;
        year = y;
    }
    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Year : " << year << endl;
    } 
 };
int main() {
    Cars c1("BMW", 2025);
    c1.display();
    Cars c2 = Cars("Toyota", 2023);
    c2.display();
    return 0; }

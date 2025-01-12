/*Explain how constructors are called in inheritance. Provide an example of a 
base class and a derived class.*/
#include <iostream>
using namespace std;

class base {
    int value;
public:
    base(int a) : value(a) {} // Base class constructor
    int getValue() const { return value; }
};

class derived : public base {
    int value2;
public:
    derived(int a, int b) : base(a) { // Derived class constructor calling base class constructor
        value2 = b;
    }
    void display() {
        cout << "Base value: " << getValue() << " Derived value: " << value2 << endl;
    }
};

int main() {
    derived obj(5, 10); // Creating an object of derived class
    obj.display(); // Display values
    return 0;
}

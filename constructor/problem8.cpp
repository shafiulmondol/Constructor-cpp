/*Implement a class where the constructors are overloaded for different numbers 
of arguments*/
#include <iostream>
using namespace std;

class Constructor {
    int a, b;
    char c;

public:
    // Constructor with one argument
    Constructor(int a) : a(a), b(0), c('\0') {} // Initialize `b` and `c` with default values

    // Constructor with three arguments, one being a reference to another object
    Constructor(int b, char c, Constructor &x) : b(b), c(c), a(x.a) {}

    // Display function
    void display() {
        cout << "Integers are " << a << " and " << b << "\nCharacter is " << c << endl;
    }
};

int main() {
    Constructor obj1(5);               // Single-argument constructor
    Constructor obj2(10, 'S', obj1);  // Three-argument constructor

    obj2.display(); // Display obj2's data
    return 0;
}

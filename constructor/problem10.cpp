/*Write a program to demonstrate a constructor for a static member variable.*/
#include <iostream>
using namespace std;

class A {
    static int a; // Declaration of static member variable
public:
    // Constructor to initialize static member
    A(int x) {
        a = x;
    }

    // Static member function to display the value of 'a'
    static void display() {
        cout << "Value of a: " << a << endl;
    }
};

// Definition and initialization of the static member variable
int A::a = 0;

int main() {
    A obj1(5); // Initialize 'a' using the constructor
    A::display(); // Display the value of 'a' using a static function

    A obj2(10); // Update 'a' using another object
    A::display(); // Display the updated value of 'a'
    return 0;
}

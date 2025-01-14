/*Write a program to show how constructors with default arguments can simulate 
overloading.*/
#include <iostream>
using namespace std;

class A {
    int a, b;
public:
    // Constructor with one default argument
    A(int x = 5) {
        a = x;
        b = 0; // Default value for b
    }

    // Constructor with two arguments
    A(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int main() {
    int x, y;

    // Input values for demonstration
    cout << "Enter values for x and y: ";
    cin >> x >> y;

    // Creating objects with different constructors
    A ob1(x);        // Calls the constructor with one argument
    A ob2(x, y);     // Calls the constructor with two arguments

    // Display values
    cout << "Object 1: ";
    ob1.display();
    cout << "Object 2: ";
    ob2.display();

    return 0;
}

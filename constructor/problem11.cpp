/*Implement a class that dynamically allocates memory in the constructor and 
releases it in the destructor.*/
#include <iostream>
using namespace std;

class A {
    int *a; // Pointer to dynamically allocate memory

public:
    // Constructor: Dynamically allocate memory
    A(int x) {
        a = new int(x); // Allocate memory and initialize it
        cout << "Memory allocated for a with value: " << *a << endl;
    }

    // Destructor: Release the allocated memory
    ~A() {
        delete a; // Release the memory
        cout << "Memory released for a" << endl;
    }

    // Display function
    void display() {
        cout << "Value of a: " << *a << endl;
    }
};

int main() {
    A *obj = new A(5); // Dynamically allocate memory for an object of class A
    obj->display();    // Display the value
   
    return 0;
}

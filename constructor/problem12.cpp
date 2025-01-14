/*Show how exceptions can be handled when a constructor fails during dynamic 
memory allocation.*/
#include <iostream>
using namespace std;

class A {
    int *data; // Pointer for dynamic memory allocation

public:
    // Constructor: Dynamically allocates memory for an integer
    A(int value) {
        try {
            data = new int; // Attempt to allocate memory
            *data = value;  // Initialize the allocated memory
            cout << "Memory allocated successfully, value = " << *data << endl;
        } catch (bad_alloc &e) {
            // Handle memory allocation failure
            cout << "Constructor failed: " << e.what() << endl;
            throw; // Re-throw exception to be handled by the caller
        }
    }

    // Destructor: Release allocated memory
    ~A() {
        delete data;
        cout << "Memory released" << endl;
    }

    // Display function
    void display() {
        if (data) {
            cout << "Value: " << *data << endl;
        } else {
            cout << "No data allocated" << endl;
        }
    }
};

int main() {
    try {
        // Attempt to create an object
        A *obj = new A(42); // Dynamically allocate and initialize with 42
        obj->display();     // Display the value
        delete obj;         // Clean up
    } catch ( bad_alloc &e) {
        // Handle memory allocation failure
        cout << "Failed to create object: " << e.what() << endl;
    }

    return 0;
}

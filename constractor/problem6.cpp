/*Create a class that uses a copy constructor to copy the values from one object
 to another.*/
#include <iostream>
using namespace std;
class constructor
{
    int value, update = 0;

public:
    constructor(int a)
    { // parametarized constructor
        value = a;
        update = value + 5;
    }
    constructor(constructor &a)
    {                     // coppy constructor
        value = a.update; // value is coppyed from one object to another object
    }
    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    constructor obj1(5);     // Parameterized constructor
    constructor obj2(obj1);  // coppy constructor called
    constructor obj3 = obj1; // coppy constructor called
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
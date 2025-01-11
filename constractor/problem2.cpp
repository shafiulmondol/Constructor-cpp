/*Create a class with multiple constructors using constructor overloading.
 Demonstrate how each constructor can be used.*/
#include <iostream>
using namespace std;

class constractor_overloading
{
public:
    constractor_overloading()
    {
        cout << "Default constractor run\n";
    }
    constractor_overloading(int a, int b)
    {
        cout << " Peramitermiteraised constractor run\n";
        cout << "sum= " << a + b;
    }
    constractor_overloading(int a, float b)
    {
        cout << " Peramitermiteraised constractor run\n";
        cout << "sum= " << a + b;
    }
};
int main()
{
    constractor_overloading ob, ob2(2, 3), ob3(3, 2.5f);
    /*compilar does not deffarentiate the int and float thats why for
    indecating float we use f with the floating number */
    return 0;
}
/*Explain the difference between a default constructor and a parameterized
constructor with a coding example*/
#include <iostream>
using namespace std;
class constractor
{
    int a, b;

public:
    constractor()
    {
        cout << "Default constractor called" << endl;
    }
    constractor(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "Parameterized constractor called" << endl;
        cout << "Sum= " << a + b << endl;
    }
    ~constractor()
    { // destractor
    }
};
int main()
{
    constractor d_object;
    constractor p_object(1, 3);
    p_object.display();
}
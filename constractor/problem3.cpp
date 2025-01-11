/*Implement a class with a parameterized constructor. Show how it is used
to initialize objects with different data.*/
#include <iostream>
using namespace std;

class p_constractor
{
    // private member
    int i;
    float f;
    char ch;
    string st;

public:
    p_constractor(int a, float b, char c, string d)
    {
        // initialization
        i = a;
        f = b;
        ch = c;
        st = d;
    }
    void display()
    {
        cout << "Sum= " << i + f;
        cout << "\nCharecter is '" << ch << " '" << endl;
        cout << "String is '" << st << " '" << endl;
    }
};
int main()
{
    p_constractor obj(3, 2.5, 's', "Shafiul Mondol");
    obj.display();
}
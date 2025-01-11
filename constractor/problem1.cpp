/*Write a class with a default constructor. Explain its purpose and demonstrate
how it is invoked.*/
#include <iostream>
using namespace std;

class cons
{
public:
    cons()
    {
        cout << "constractor run successfully\n";
    }
    ~cons()
    {
        cout << " distractor run successfully";
    }
};
int main()
{
    cons object; // when the object area created the constractor is invoked
}
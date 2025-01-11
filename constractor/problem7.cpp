/*Write a program to demonstrate the concept of a copy constructor when
working with dynamically allocated memory.*/
#include <iostream>
using namespace std;

class cons
{
    int *v; // dynamic initialization
public:
    cons(int a)
    {
        v = new int; // alocated memory
        *v = a;
    }
    cons(cons &a)
    {
        v = new int; // alocated new memory
        *v = *(a.v) + 1;
    }
    void display()
    {
        cout << *v << endl;
    }
};

int main()
{
    cons obj1(5);
    cons obj2(obj1);
    obj1.display();
    obj2.display();
    obj1.display();
}
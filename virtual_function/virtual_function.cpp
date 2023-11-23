#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "I am from Base class " << endl;
    }
    void show()
    {
        cout << "I am show from Base Class" << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "I am from Derived class" << endl;
    }
    void show()
    {
        cout << "I am show from Derived Class" << endl;
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d; // address of derived class is assigned to obj of base class
    bptr->print();
    bptr->show(); // show is not a virtual class
    return 0;
}
#include <iostream>
using namespace std;
// both the child classes will access the same parent
class A
{
public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
};
class B:public A
{
public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
};
class C : public A
{
public:
    C()
    {
        cout << "Constructor of C" << endl; 
    }
};
int main()
{
    B b;
    C c;
    return 0;
}
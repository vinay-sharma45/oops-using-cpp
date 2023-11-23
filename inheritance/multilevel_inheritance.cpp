#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
    string name = "Abhay";
};
class B : public A
{
public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
    string name = "Karthik";
};
class C : public B
{
public:
    C()
    {
        cout << "Constructor of C" << endl;
        cout << "Name of the Parent Class : " << name << endl; // name of parent B
    }
};
int main()
{
    C c;
    return 0;
}
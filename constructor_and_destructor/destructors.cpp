#include <iostream>
using namespace std;

class Dest
{
public:
    // constructor
    Dest()
    {
        cout << "Constructor is called" << endl;
    };
    // destructor (will be called at the end of all the execution)
    ~Dest() 
    {
        cout << "Destructor is called" << endl;
    }
    // member function
    void display()
    {
        cout << "Good Day!! from member function" << endl;
    }
};
int main()
{
    Dest d; // object creation
    d.display();
    return 0;
}
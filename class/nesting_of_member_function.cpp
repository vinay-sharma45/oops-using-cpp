#include <iostream>
using namespace std;

class set
{
    int firstNumber, secondNumber;

public:
    void input(void);
    void display(void);
    int largest(void);
};
int set::largest(void)
{
    if (firstNumber > secondNumber)
    {
        return firstNumber;
    }
    else
    {
        return secondNumber;
    }
}
void set::input(void)
{
    cout << "Input two numbers : " << endl;
    cin >> firstNumber >> secondNumber;
}
void set::display(void)
{
    cout << "Largest number in " << firstNumber << " & " << secondNumber << " is " << largest() << endl; // calling largest function from display()
}

int main()
{
    set s;
    s.input();
    s.display();
    return 0;
}
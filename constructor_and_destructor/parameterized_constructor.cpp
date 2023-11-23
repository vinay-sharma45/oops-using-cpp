#include <iostream>
using namespace std;

class Add
{
public:
    // parameterized constructor
    Add(int n, int m)
    {
        cout << "Sum = " << (n + m) << endl;
    }
};
class Percentage
{
    int rollNo;
    string name;
    float percentage;
    int m1, m2, m3, m4, m5;

public:
    Percentage(){};
    Percentage(int, string, int, int, int, int, int);
    void info(void);
};
Percentage::Percentage(int rollNo, string name, int m1, int m2, int m3, int m4, int m5)
{
    this->rollNo = rollNo;
    this->name = name;
    percentage = (m1 + m2 + m3 + m4 + m5) / 5;
}
void Percentage::info(void)
{
    cout << "Roll No : " << rollNo << endl
         << "Name : " << name << endl
         << "Percentage : " << percentage << endl;
}
int main()
{
    Add s(34, 66);
    Percentage p(45, "Keshav", 88, 99, 98, 97, 94);
    p.info();  
}
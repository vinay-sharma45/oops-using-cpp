#include <iostream>
using namespace std;

class Teacher
{

public:
    Teacher()
    {
        cout << "Hey, I am a Teacher!" << endl;
    }
    string collegeName = "ABC College";
};
class MathTeacher : public Teacher
{
public:
    MathTeacher()
    {
        cout << "I am a Math Teacher from " << collegeName << endl;
    }
};
int main()
{
    MathTeacher obj; // parent class constructor then chid class constructor will be called

    return 0;
}
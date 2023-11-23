#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    void getData(void);
    void putData(int, string, float);
};
void Employee::getData(void)
{
    cout << "Id : " << id << endl
         << "Name : " << name << endl
         << "Salary : " << salary << endl;
}
void Employee::putData(int id, string name, float salary)
{
    this->id = id;
    this->name = name;
    this->salary = salary;
}
int main()
{
    Employee emp;
    emp.putData(23, "Alex", 450000);
    emp.getData();
    return 0;
}
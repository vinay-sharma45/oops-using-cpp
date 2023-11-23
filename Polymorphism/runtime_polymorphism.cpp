// (function overriding)
#include<iostream>
using namespace std;

class A{
    public:
        void display(){
            cout<<"This is superclass function"<<endl;
        }
};
class B : public A{
    public:
        void display(){
            cout<<"This is childclass function"<<endl;
        }
};
int main(){
    A obj;
    obj.display();
    // whose display function will be called depends on using whose obj we call, is decided at run time 
    B obj2;
    obj2.display();
    return 0;
}
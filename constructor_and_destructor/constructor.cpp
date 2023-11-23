#include<iostream>
using namespace std;

class Const{
    public:
        // default constructor
        Const(){
            cout<<"Hello, from Constructor "<<endl;
        }
};
int main(){
    Const c;
    return 0;
}
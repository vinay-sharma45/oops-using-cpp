#include<iostream>
using namespace std;
class item{
    int number;
    float cost;
    public:
        void getData(int a,int b);
        // function definition inside the class
        void putData(void){
            cout<<"Number: "<<number<<endl;
            cout<<"Cost: "<<cost<<endl;
        }
};
// function definition outside the class
void item::getData(int a,int b){
    number = a;
    cost = b;
}
int main(){
    item i;
    i.getData(34,449);
    i.putData();

    return 0;
}
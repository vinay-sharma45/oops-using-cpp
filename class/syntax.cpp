#include<iostream>
using namespace std;

class Car{
    private:
        string name;
        string color;
        int maxSpeed;
    public:
        void putInfo(void);
        void getInfo(void){
            cout<<"Name : "<<name<<endl 
            <<"Color : "<<color<<endl
            <<"Max Speed : "<<maxSpeed<<endl;
        }

}buggati;
void Car::putInfo(void){
    cout<<"Enter name of the car"<<endl;
    getline(cin,name);
    cout<<"Color "<<endl;
    getline(cin,color);
    cout<<"What's max speed? "<<endl;
    cin>>maxSpeed;

}

int main(){
    Car audi;
    audi.putInfo();
    audi.getInfo();
    buggati.putInfo();
    buggati.getInfo();
    return 0;
}
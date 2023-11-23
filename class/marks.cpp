#include<iostream>
using namespace std;
class marks{
    private:
        int m1,m2;
    public:
        void getData(void);
        void display(void);
};
void marks::getData(void){
    cout<<"Enter 1st subject marks"<<endl;
    cin>>m1;
    cout<<"Enter 2nd subject marks"<<endl;
    cin>>m2;
}
void marks::display(void){
    cout<<"1st subject marks : "<<m1<<endl;
    cout<<"2nd subject marks : "<<m2<<endl;
}
int main(){
    marks m;
    m.getData();
    m.display();
    return 0;
}
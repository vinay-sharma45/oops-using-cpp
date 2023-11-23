#include<iostream>
using namespace std;
const int size = 5;
class Student{
    int rollNo;
    int marks[size];
    public:
        void getData(void);
        void total_marks();
};
void Student::getData(void){
    cout<<"Enter your roll number : "<<endl;
    cin>>rollNo;
    for(int i = 0 ;i<size;i++){
        cout<<"Enter marks of subject "<<(i+1)<<endl;
        cin>>marks[i];
    }
}
void Student::total_marks(void){
    int total = 0;
    for(int i = 0;i<size;i++){
        total +=marks[i];
    }
    cout<<"Total marks : "<<total<<endl;
    cout<<"Percentage : "<<(total/5)<<endl;
}

int main(){
    Student s;
    s.getData();
    s.total_marks();
    return 0;
}  
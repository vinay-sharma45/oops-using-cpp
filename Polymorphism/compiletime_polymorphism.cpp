// (function overloading)
#include<iostream>
using namespace std;

class Add{
    public:
        int sum(int n,int m){
            return n+m;
        };
        int sum(int n,int m,int p){
            return n+m+p;
        }

};
int main(){
    Add s;
    cout<<"Output : "<<s.sum(34,44)<<endl;
    cout<<"Output : "<<s.sum(34,44,10)<<endl;
    return 0;
}
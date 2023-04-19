#include <iostream>
using namespace std;
class arshu{
    public:
    void fun(){
        cout<<"i am fucnton with no arg"<<endl;
    }
    void fun(int x){
        cout<<"i am function with int arg"<<endl;
    }
    void fun(double x){
        cout<<"i am function with doube argumnets"<<endl;
    }
};
int main(){
    arshu obj;
    obj.fun();
    obj.fun(6.2);
    obj.fun(5);

}
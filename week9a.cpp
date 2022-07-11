//week_9a.cpp
#include<iostream>
using namespace std;
class Base{
    private:
         int data1=5000;
    public:
        int data2=100000;
        void fun1(){
            cout<<"Base class Function is called\n";
        }
        int  setter(){
            return data1;
        }
};

class Derived1: public Base{
    public:
    int data3=30000;
    void fun1(){
        cout<<"Method overidded"<<endl;
    }
    void total(){
        cout<<"Sum of data2 and data3 is "<<data2+data3<<endl;
    }
};
int main(){
    Base b1;
    cout<<"The value of data1 is "<<b1.setter()<<endl;
    b1.fun1();
    Derived1 d1;
    d1.fun1();
    d1.total();
}
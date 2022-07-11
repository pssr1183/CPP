//week_9b.cpp
#include<iostream>
using namespace std;
class Base1{
    private:
         int data1=5000;
    public:
        int data2=100000;
        void fun1(){
            cout<<"Base class Function is called\n";
        }
        int  getter(){
            return data1;
        }
};
class Base2{
     public:
        int data4;
        void base2Fun(){
            cout<<"Enter the data\n";
            cin>>data4;
         }
         void fun1(){
            cout<<"Base2 class overidden the function\n";
         }
         void fun2(){
            cout<<"fun2 is called\n";
         }
};

class Derived1: public Base2, public virtual Base1{
    public:
    int data3=30000;

    void total(){
        cout<<"Sum of data2 and data3 and data4 is "<<data2+data3+data4<<endl;
    }
};
int main(){
    Base1 b1;
    cout<<"The value of data1 is "<<b1.getter()<<endl;
    b1.fun1();
    Derived1 d1;
    d1.base2Fun();
    d1.total();
    
}

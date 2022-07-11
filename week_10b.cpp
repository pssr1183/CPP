//week_10b.cpp
#include<iostream>
using namespace std;
class simpleCalc{
    public:
        int num1,num2;
        void fun(){
        cout<<"Enter the two numbers\n";
        cin>>num1>>num2;    
        }
};
class Calc: public simpleCalc{
    public:
        void sum(){
        cout<<"The sum of two numbers is "<<num1+num2<<endl;
        }
        void diff(){
        cout<<"The difference of two numbers is "<<num1-num2<<endl;
        }
};
class AdvCalc: public simpleCalc{
    public:
        void product(){
        cout<<"The product of two numbers is "<<num1*num2<<endl;
        }
        void Division(){
        cout<<"The division of two numbers is "<<num1/num2<<endl;
        }
};
int main(){
    AdvCalc obj2;
    Calc obj1;
    obj1.fun();
    obj1.sum();
    obj1.diff();
    obj2.fun();
    obj2.product();
    obj2.Division();
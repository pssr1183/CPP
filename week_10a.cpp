//week-10a.cpp
#include<iostream>
using namespace std;
class simpleCalc{
    public:
        int num1,num2;
        void fun(){
        cin>>num1>>num2;    
        }
        
        void sum(){
            cout<<"The sum of two numbers is "<<num1+num2<<endl;
        }
};
class Calc: public simpleCalc{
    public:
        void diff(){
        cout<<"The difference of two numbers is "<<num1-num2<<endl;
        }
};
class AdvCalc: public Calc{
    public:
        void product(){
        cout<<"The product of two numbers is "<<num1*num2<<endl;
        }
        void Division(){
        cout<<"The division of two numbers is "<<num1/num2<<endl;
        }
};
int main(){
    AdvCalc obj1;
    obj1.fun();
    obj1.sum();
    obj1.diff();
    obj1.product();
    obj1.Division();
}
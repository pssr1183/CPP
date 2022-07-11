//
#include <iostream>
using namespace std;
class Base{
  public:
  void fun1(){
      cout<<"Base class Fun1 is called\n";
  }
  virtual void fun2(){
     cout<<"Base class Fun2 is called\n";
  }
  virtual void fun3(){
       cout<<"Base class Fun3 is called\n";
  }
};

class Derived: public Base{
  void fun1(){
      cout<<"Derived class Fun1 is called\n";
  }
  void fun2(){
     cout<<"Derived class Fun2 is called\n";
  }
  void fun3(int a){
       cout<<"Derived class Fun3 is called "<<endl;
  }
};
int main()
{
    Derived obj;
    Base *ptr;
    ptr=&obj;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();

    return 0;
}
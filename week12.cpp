//week12.cpp
#include<iostream>
using namespace std;
class base{
public:
void virtual print(){
cout<<"This is base class function\n";
}
};
class derived : public base{
public:
void print(){
cout<<"This is derived class function\n";
}
};

int main(){
base *ptr;
derived obj;
ptr = &obj;
ptr->print();
}
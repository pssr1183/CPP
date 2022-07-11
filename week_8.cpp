//week_8.cpp
#include<iostream>
using namespace std;
class Conc
{
private:
int num1,num2;
public:
Conc(){
cout<<"Default constructor is called"<<endl;
num1=0;
num2=0;
}
Conc(int num1,int num2){
this->num1=num1;
this->num2=num2;
}
~Conc(){
cout<<"Destructor is called after object goes out of scope\n";
}
Conc(Conc &c1){
num1=c1.num1;
num2=c1.num2;
}
void display(){
cout<<"The value of num1 is "<<num1<<endl;
cout<<"The value of num2 is "<<num2<<endl;
}
};
int main(){
Conc c1(1,2);
Conc c2=c1;
c1.display();
c2.display();
Conc c3;
c3.display();
}
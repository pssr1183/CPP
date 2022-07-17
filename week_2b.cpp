#include<iostream>
using namespace std;
class Unary{
int x,y,z;
public:
void setter(int a,int b, int c){
    x=a;
    y=b;
    z=c;
}
void operator-(){
    x=-x;
    y=-y;
    z=-z;
} 
void print(){
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of y is "<<y<<endl;
    cout<<"The value of z is "<<z<<endl;
}
};
int main(){
    Unary u;
    u.setter(1,2,-3);
    u.print();
    -u;
    u.print();
}
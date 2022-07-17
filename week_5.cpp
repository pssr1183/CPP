#include<iostream>
using namespace std;
class A{
    public:
    static void add(int a=2, int b=3){
        cout<<"The sum of two number is "<<a+b<<endl;
    }
};
int main(){
    int a,b;
    cin>>a>>b;
    A::add();
    A::add(a,b);
}
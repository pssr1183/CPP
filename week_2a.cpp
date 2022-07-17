#include <iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    Complex(int real=0, int img=0){
        this->real=real;
        this->img=img;
    }
    Complex operator+(Complex const &obj){
        Complex res;
        res.real=real+obj.real;
        res.img=img+obj.img;
        return res;
    }
    void print(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }
};

int main()
{
    Complex c1(10,20),c2(20,30),c3;
    c3=c1+c2;
    c3.print();

    return 0;
}

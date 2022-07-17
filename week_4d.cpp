#include<iostream>
using namespace std;
int add(int a=1, int b=2, int c=4){
    return a+b+c;
}
int mul(int a=1, int b=2, int c=4){
    return a*b*c;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"The sum of a b and c is "<<add(a,b,c)<<endl;
    cout<<"The sum of a,b and c is with default arguments is "<<add()<<endl;
    cout<<"The product of three numbers is "<<mul(a,b,c)<<endl;
    cout<<"The product of three numbers with default arguments is "<<mul()<<endl;

}
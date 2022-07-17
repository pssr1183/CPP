#include<iostream>
using namespace std;
inline int mul(int a, int b){
    return a*b;
}
int add (int a, int b){
    return a+b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"The value of a*b is "<<mul(a,b)<<endl;;
    cout<<"The sum of a and b is "<<add(a,b)<<endl;
}
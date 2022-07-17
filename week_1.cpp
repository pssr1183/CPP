#include <iostream>
int FuncOver(int a, int b);
double FuncOver(double a, double b);
int FuncOver(int a, int b){
    return a+b;
}
double FuncOver(double a, double b){
    return a+b;
}
using namespace std;

int main()
{
    cout<< FuncOver(5,6);
    cout<<"\n";
    cout<< FuncOver(6.67,7.89);

    return 0;
}

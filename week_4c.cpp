#include<iostream>
using namespace std;
class Box{
double length;
double breadth;
double height;
public:
static int objectCount;
Box(){
    objectCount++;
}
void setdata(int l,int b, int h){
    length=l;
    breadth=b;
    height=h;
}
double volume(){
    return length*breadth*height;
}
};
int Box::objectCount=0;
int main(){
    Box B1;
    int l,b,h;
    cin>>l>>b>>h;
    B1.setdata(l,b,h);
    cout<<"The volume of B1 is "<<B1.volume()<<endl;
    cout<<"Number of Objects created is "<<Box::objectCount<<endl;

}
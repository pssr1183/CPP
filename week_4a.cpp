#include<iostream>
using namespace std;
class Distance{
int meter;
friend int addFive(Distance);
public:
Distance(){meter=0;}
int getdata(){
    return meter;
}
};
int addFive(Distance d){
    d.meter=d.meter+5;
    return d.meter;
}
int main(){
    Distance d;
    cout<<"The value of meter is "<<d.getdata()<<endl;
    cout<<"The value of meter is with addFive function"<<addFive(d)<<endl;

}
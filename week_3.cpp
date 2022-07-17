#include<iostream>
#include<stdlib.h>
using namespace std;
class Student{
private:
int age;
string name;
public:
Student(string name, int age){
    this->age=age;
    this->name=name;
}
void display(){
    cout<<"Name is "<<name<<endl;
    cout<<"Age is "<<age<<endl;
}
void * operator new(size_t size){
    cout<<"Overloading new Operator with size "<<size<<endl;
    void *p=malloc(size);
    return p;
}
void operator delete(void *p){
    cout<<"Overloading delete operator\n";
    free(p);
}
};
int main(){
    Student *p=new Student("Name",20);
    p->display();
    delete p;

}

//week_11.cpp
#include<iostream>
using namespace std;

class Student{
    public:
        virtual void profession()=0;
        void details(){
            cout<<"He is a Student\n";
        }
};
class Engineering: public Student{
    public:
    void profession(){
        cout<<"He/She is an Engineer\n";
    }
};
class Medical: public Student{
    public:
    void profession(){
        cout<<"He/She is a Medical Student\n";
    }
};
class Science: public Student{
    public:
    void profession(){
        cout<<"He/She is a Science Student\n";
    }
};
int main(){
    Engineering E1;
    E1.details();
    E1.profession();
    Medical M1;
    M1.profession();
    Science S1;
    S1.profession();
}
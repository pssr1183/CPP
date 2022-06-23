#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
};
void operator delete(void *p){
    cout<<"\nMemory Deallocated\n";
    free(p);
}
int main(){
Node *head,*one=NULL,*two=NULL,*three=NULL,*temp;
one = new Node();
two = new Node();
three = new Node();
one->data=1;
two->data=2;
three->data=3;
one->next=two;
two->next=three;
three->next=NULL;
head=one;
temp=head;
while(temp){
cout<<temp->data<<" ";
temp=temp->next;
}
//deleting a node 
two->next=NULL;
delete three;
cout<<"After deleting the node"<<endl;
temp=head;
while(temp){
cout<<temp->data<<" ";
temp=temp->next;
}
}

#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node *next;
};
node *head,*newnode,*temp;
void insert();
void Delete();
void display();
void insert(){
    int data;
    cin>>data;
    newnode= new node();
    newnode->data=data;
    newnode->next=NULL;
    head=newnode;
}
void display(){
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<" ";
        temp =temp->next;
    }
}
void Delete (){
    cout<<"Delete\n";
}
int main(){
    int s;
    while(1){
        cout<<"1.Insert\n2.Delete\n3.display\n4.exit\n";
        cin>>s;
        switch(s){
            case 1:
            insert(); break;
            case 2:
            Delete(); break;
            case 3:
            display(); break;
            case 4:
            exit(o); break;
        }

    }
}
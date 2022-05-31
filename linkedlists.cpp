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
    if(head==NULL){
    newnode->next=NULL;
        head=newnode;}
        else{
            newnode->next=head;
            head=newnode;
            
        }
}
void display(){
    temp=head;
    while(temp->next){
        cout<<temp->data<<"->";
        temp =temp->next;
    }cout<<temp->data<<"\n";
}
void Delete (){
    head=head->next;
    cout<<"Deleted\n";
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
            exit(0); break;
        }

    }
}

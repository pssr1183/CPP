#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node *next;
};
node *head,*newnode,*temp;
void insertBeg();
void Delete();
void display();
void insertEnd();
void insertBeg(){
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
void insertEnd(){
    newnode= new node();
    int data;
    cin>>data;
    newnode->data=data;
    if(head==NULL) {newnode->next=NULL;
    head = newnode;}
    else{
        while(temp->next!=NULL) temp=temp->next;
        temp->next=newnode;
        newnode->next=NULL;
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
        cout<<"1.InsertBeg\n2.InsertEnd\n3.Delete\n4.display\n5.exit\n";
        cin>>s;
        switch(s){
            case 1:
            insertBeg(); break;
            case 2:
            insertEnd(); break;
            case 3:
            Delete(); break;
            case 4:
            display(); break;
            case 5:
            exit(0); break;
        }

    }
}

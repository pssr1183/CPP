#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node *next;
};
node *head,*newnode,*temp,*temp1,*temp2;
void insertBeg();
void DeleteBeg();
void DeleteEnd();
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

void DeleteBeg(){
    if(head==NULL) cout<<"List is Empty\n";
    else{
    temp=head;
    head=head->next;
    cout<<"Deleted\n";
}
}
void DeleteEnd(){
    if(head==NULL) cout<<"List is Empty\n";
    else{
 temp1=head;
 while(temp1->next!=NULL){
     temp2=temp1;
     temp1=temp1->next;
 }
 temp2->next=NULL;
 cout<<"Deleted\n";
 }
}
void display(){
    temp=head;
    while(temp->next){
        cout<<temp->data<<"->";
        temp =temp->next;
    }cout<<temp->data<<"\n";
}

int main(){
    int s;
    while(1){
        cout<<"1.InsertBeg\n2.InsertEnd\n3.DeleteBeg\n4.DeleteEnd\n5.display\n6.exit\n";
        cin>>s;
        switch(s){
            case 1:
            insertBeg(); break;
            case 2:
            insertEnd(); break;
            case 3:
            DeleteBeg(); break;
            case 4:
            DeleteEnd(); break;
            case 5:
            display(); break;
            case 6:
            exit(0); break;
        }

    }
}

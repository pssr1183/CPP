#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next;
  Node *prev;
};
Node *newnode, *head, *temp,*temp2;
void insertBeg(){
    newnode = new Node();
    int data;
    cin>>data;
    newnode->data=data;
    if(head==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
    }
    else{
        newnode->prev=NULL;
        newnode->next=head;
        head=newnode;
    }
    
}

void insertEnd(){
    newnode=new Node();
    int data;
    cin>>data;
    newnode->data=data;
    
    if(head==NULL){
        newnode->next=NULL;
        newnode->prev=NULL;
        head=newnode;
        
    }
    temp=head;
    while(temp->next!=NULL) temp=temp->next;
    newnode->next=NULL;
    newnode->prev=temp;
    temp->next=newnode;
}

void insertSpec(){
    int val;
    cout<<"Enter the value after which node has to be inserted";
    cin>>val;
    int data;
    cin>>data;
    newnode= new Node();
    newnode->data=data;
    temp=head;
    while(temp->data!=val) temp=temp->next;
    newnode->next=temp->next;
    temp2=temp->next;
    temp2->prev=newnode;
    newnode->prev=temp;
    temp->next=newnode;
    
}

void delete_beg(){
    if(head==NULL) cout<<"List is empty\n";
    else{
        head=head->next;
        head->prev=NULL;
        cout<<"Element deleted\n";
    }
}

void delete_end(){
     if(head==NULL) cout<<"List is empty\n";
     else{
         temp=head;
         while(temp->next!=NULL) {
             temp2=temp;
             temp=temp->next;
         }
         temp2->next=NULL;
         cout<<"Element deleted\n";
         
     }
}

void deletespec(){
    if(head==NULL) cout<<"List is empty\n";
    else{
        cout<<"Enter the node to be deleted\n";
        int val;
        cin>>val;
        while(temp->data!=val) temp=temp->next;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
}

void display(){
    temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int main (){
    int choice;
    while(1){
        cout<<"\n1.Insert at beginning\n2.Insert after specific node\n3.Insert at end\n4.delete at beginning\n5.Delete at end\n6.delete a specific node\n7.Display\n8.ReverseDisplay\n9.Exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        switch(choice){
    case 1:
    insertBeg();
    break;
    case 3:
    insertEnd();
    break;
    case 2:
    insertSpec();
    break;
    case 4:
    delete_beg();
    break;
    case 5:
    delete_end();
    break;
    case 6:
    deletespec();
    break;
    case 7:
    display();
    break;
    case 8:
    exit(0);
        }
        
}
}

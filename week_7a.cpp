#include<iostream>
using namespace std;
class node{
    public:
  int data;
  node *next;
};
node *head,*newnode,*temp,*temp1,*temp2;
void insertBeg();
void insertspecific();
void DeleteBeg();
void DeleteSpecific();
void DeleteEnd();
void display();
void insertEnd();
void insertspecific(){
    int value,data;
    cout<<"Enter the specific node\n";
    cin>>value;
    cout<<"Enter the node value\n";
    cin>>data;
    newnode = new node ();
    newnode->data=data;
    temp=head;
    while(temp->data!=value) temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
    
}
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
        temp=head;
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
void DeleteSpecific(){
    int value;
    cout<<"Enter the node value\n";
    cin>>value;
    temp1=head;
    while(temp1->data!=value){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=temp1->next;
}
void DeleteEnd(){
    if(head==NULL) cout<<"List is Empty\n";
    else if(head->next==NULL) {
        head=NULL;
        cout<<"Deleted\n";}
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
    if(head==NULL) cout<<"List is empty\n";
    else{
    temp=head;
    while(temp->next){
        cout<<temp->data<<"->";
        temp =temp->next;
    }cout<<temp->data<<"\n";
}
}

int main(){
    int s;
    while(1){
        cout<<"1.InsertBeg\n2.InsertEnd\n3.Insert Specific \n4.DeleteBeg\n5.Delete Specific\n6.DeleteEnd\n7.display\n8.exit\n";
        cin>>s;
        switch(s){
            case 1:
            insertBeg(); break;
            case 3:
            insertspecific(); break;
            case 2:
            insertEnd(); break;
            case 4:
            DeleteBeg(); break;
            case 5:
            DeleteSpecific(); break;
            case 6:
            DeleteEnd(); break;
            case 7:
            display(); break;
            case 8:
            exit(0); break;
        }

    }
}



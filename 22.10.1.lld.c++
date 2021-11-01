#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;
    
    
    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n=newnode(val);
    
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    
    
}

    void insertAtTail(node* &head, int val){
        
        if(head==NULL){
            insertAtTail(head,val);
            return;
        }
        node* n= new node(val);
        node* temp=head;
        
        while(temp->next!=head){
            temp=temp->next;
        }
        
    }
    
    
    void display(node*head){
        
        
        node*temp=head;
        do
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        
         }while(temp!=head)
         cout<<endl;
    }
int main(){
  
    node*head=NULL;
   
   insertAtTail(head1,1);
   insertAtTail(head1,2);
   insertAtTail(head1,3);
   insertAtTail(head1,4);
   display(head);
   insertAtHead(head,5);
   display(head);

  return 0;
}

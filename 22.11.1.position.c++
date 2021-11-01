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
        
        temp->next=n;
        n->next=head;
        
    }
    void deleteAthead(node* &head){
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
            
        }
        node* todelete=head;
        temp->next=head->next;
        head=head->next;
        
        delete todelete;
        
    }
    
    
    
    
    void delection(node* &head,int pos){
        
        if(pos==1){
            deleteAtHead(head);
            return;
        }
        
        
        node*temp=head;
        int count=1;
        
        while(count!=pos-1){
            temp=temp->next;
            count++;
        }
        node* todelete=temp->next;
        temp->next=temp->next->next;
        
        
        delete todelete;
    }
    
    
    void display(node*head){
        
        
        node*temp=head;
       while(temp=head){
           
        cout<<temp->data<<"-";
        temp=temp->next;
       }
       cout<<"NULL"<<endl;
       
       
    }
    void evenAfterOdd(node* &head){
        node* odd=head;
        node* even=head->next;
        node* evenStart=even;
        while(odd->next!=NULL && even->next!=NULL){
            
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenStart;
        if(odd->next!=NULL){
            even->next=NULL;
        }
    }
int main(){
  
    node*head=NULL;
    int arr[]={1,2,3,4,5,6}
    for(int i=0;i<6;i++){
        insertAtTail(head,arr[i]);
        
    }
    display(head);
    evenAfterOdd(head);
    display(head);
    
   
  return 0;
}

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;


    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}



void insertAtTail(node* &head, int val){

    node* n= new node(val);

    if(head==NULL){
        head=n;
        return;
    }


    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node*head ){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head, int pos){
    node*temp=head;
    node*startNode;
    
    int count=1;
    while(temp->next!=NULL){
        if(count == pos){
            starNode=temp;
            
        }
        temp=temp->next;
        count++;
        
    }
    temp->next=startNode;
}

bool search(node*head, int key){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
            
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node*todelete=head;
    head=head->next;
    
    
    delete todelete;
}


void deletion(node* &head, int val){
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    
    node*todelete=temp->next;
    
    temp->next=temp->next->next;
    
    delete todelete;
}

void deletion(node* &head, int val){
    
    
    if(head==NULL){
        return;
    }
    
    if(head->next==NULL){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
        
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    
    delete todelete;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=curptr->next;
        currptr->next=prevptr;
        
        
        prevptr=currptr;
        currptr=nextptr;
        
    }
    return prevptr;
}

node*reverseRecursive(node* &head, int k){
    
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    int count =0;
    while(currptr!=NULL && count <k){
        nextptr->currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
        
    }
    
    bool detectCycle(node* &head){
     
     
     node* slow=head;
     node* fast=head;
     
     while(fast!=NULL && fast->next!=NULL){
         slow=slow->next;
         fast=fast->next->next;
         
         if(fast==slow){
             return true;
             
         }
     }
     
     return false;
    }
    
    void removeCycle(node* &head){
        node* slow=head;
        node* fast=head;
        
        
        do
        {
            slow=slow ->next;
            fast=fast->next->next;
            
        }whhile(slow!=fast);
        
        fast=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;
    }
    
    



int main(){


    node*head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    
    
    makeCycle(head,3);
   // display(head);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
  
    


  return 0;
}
#include "bits/stdc++.h"

using namespace std;

struct Node{
    int data;
    struct Node*left;
    struct Node*right;
    
    
    Node(int val){
        data = val;
        left = NULL;
        right= NULL;
    }
};

/*         1 
          /  \
          2   3 
         / \  / \
         4  5 6  7
         
         */


void sumRecplace(Node* root){
    if(root == NULL){
        return;
    }
    sumRecplace(root->left);
    sumRecplace(root->right);
    
    if(root->left != NULL){
        root->data += root->left->data;
    }
    if(root->right != NULL){
        root->data += root->right->data;
    }
    
}

void perorder(Node* root){
    if(root == NULL){
        return;
    }
    
    cout<<root->data<<" ";
    perorder(root->left);
    perorder(root->right);
}

int main()
{
   
  Node*root = new Node(1);
  root->left = new Node(2);
  root->right= new Node(3);
  root->left->left = new Node(4);
  root->left->left = new Node(5);
  root->left->left = new Node(6);
  root->left->left = new Node(7);
  
  //sum Recplace
  perorder(root);
  cout<<"\n";
  sumRecplace(root);
  perorder(root);
  cout<<"\n";

   
    return 0;
}
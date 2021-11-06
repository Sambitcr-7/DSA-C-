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


int height(Node*root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root ->left);
    int rh = height(root ->right);
    return max(lh,rh) + 1;
}

bool isBalanced(Node * root){
    if(root == NULL){
        return true;
    }
    
    
    if(isBalanced(root->left) == false){
        return false;
        
    }
    if(isBalanced(root->right) == false){
        return false;
        
    }
    
    int lh = height(root -> left);
    int rh = height(root-> right);
    if(abs(lh - rh) <= 1){
        return true;
        
    } 
    
    else {
        return false;
    }
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
  
  //Height Balanced  Tree
 if(isBalanced(root)){
     cout<<"Balanced tree"<<"\n";
 }
 else{
     cout<<"Unbalanced tree"<<"\n";
 }
   
    return 0;
}


// unbalanced tree

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

bool isBalanced(Node* root, int * height){
    if(root == NULL){
        return true;
        
    }
    
    int lh=0 , rh =0;
    if(isBalanced(root->left, &lh) == false){
        return false;
    }
    
    if(isBalanced(root->right, &rh) == false){
        return false;
    }
    
    *height = max(lh, rh) +1;
    if(abs(lh - rh) <= 1){
        return true;
        
    }
    else{
        return false;
    }
}

int main()
{
  
  
  // NOT Balanced
/*           1 
            / 
            2 
            / 
            3 
            
    */   
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(3);
  
  //Height Balanced  Tree
 int height = 0;
 if(isBalanced(root, &height) == true){
     cout<<" balanced  tree"<<"\n";
     
 }
 else{
     cout<<"unbalanced tree"<<"\n";
 }
   
    return 0;
}
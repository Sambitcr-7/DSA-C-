#include<iostream>
#include<vector>
using namespace std;


struct Node {
    int data;
    Node *left, *right;


    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int maxPathSumUtil(Node *root, int &ans){
    if(root == NULL){
        return 0;
    }

    int left = maxPathSumUtil(root->left, ans);
    int right = maxPathSumUtil(root->right, ans);


    int nodeMax = max(max(root->data, root->data + left + right),
                        max(root-> data + left, root->data +right));

    ans = max(ans, nodeMax);
    int singlePathsum = max(root->data, max(root->data + left, root->data +right));  
    return singlePathsum;                
}


int maxPathSum(Node *root){
    int ans = 1;
    maxPathSumUtil(root,ans);
    return ans;
}


int main(){
    /*        1
             /   \
             2   3
             /   \
             4    5

     */


   Node *root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->right->left = new Node(5);
   root->right->right = new Node(6);
   root->right->left->left  = new Node(7);



   // test
   cout<<maxPathSum(root);


   return 0;


}
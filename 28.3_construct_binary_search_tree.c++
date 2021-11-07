// #include<iostream>
// using namespace std;


// struct Node{
//     int data;
//     Node* left, *right;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;
//     }
// };



// Node* constructBST(int preorder[], int preorderIdx, int key , int min, int max, int n){
//     if(*preorderIdx >= n){
//         return NULL;
//     }


//     Node* root =  NULL;
//     if(key > min && key < max){
//         root = new Node(key);
//         *preorderIdex = *preorderIdex + 1;

//         if(preorderIdex < n){
//             root-> left = constructBST(preorderIdx, preorder[*preorderIdx], main, key, n);
//         }
//         if(*preorderIdx < n){
//             root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
//         }

//     }

//     return root;
// }

// void printPreorder(Node* root){
//     if(root == NULL){
//         return ;
//     }
// }




// int main(){
//     /*          10
//               /   \
//               2    13
//               /     /
//               1    11

//     */


//    int preoder[] = {10,2,1,13,11};
//    int n = 5;
//    int preoderIdx = 0;
//    constructBST(preoder, &preoderIdx, preorder[0], INT_MIN, INT_MAX, n);
//    printPreorder(root);



//    return 0;




// }
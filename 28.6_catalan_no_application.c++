#include<iostream>
using namespace std;

int catalen(int n){
    if(n <= 1){
        return 1;

    }

    int res = 0;
    for(int i = 0; i<=n-1; i++){
        res += catalen(i) * catalen(n-i-1);
    }

    return res;

}

int main(){
    for(int i = 0; i < 10; i++){
        cout << catalen(i) << " ";
    }
    cout << endl;



    return 0;
}






// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     Node *left, *right ;
//     Node(int val){
//         data = val;
//         left = NULL;
//         right = NULL;

//     }
// };

// vector<Node*> constructTree(int start, int end){
//     vector<Node*> trees;
//     if(start > end){
//         trees.push_back(NULL);
//         return tree;
//     }

//     for(int i = start; i <=end; i++){
//         vector<Node*> leftSubtree = constructTree(start, i-1);
//         vector<Node*> rightSubtre = constructTree(i+1,end);


//         for(int j = 0; j < leftSubtree.size(); j++){
//             for(int k=0; k < rightSubteree.size(); i++){
//                 Node* right = rightSubtree[k];
//                 Node* node = new Node(i);
//                 node->left = left;
//                 node->left = right;
//                 trees.push_back(node);
//             }
//         }
//     }

//     return tree;
// }

// void preorder(Node* root){
//     if(root == NULL){
//         return;
//     }

//     cout << root->data<< " ";
//     preorder(root->left);
//     preorder(root->right);
// }




// int main(){

//     vector<Node*> totalTrees = constructTree(1,3);
//     for(int i = 0; i < totalTrees. size(); i++){
//         cout << (i+1) << " :";
//         preorder(totalTrees[i];
//         cout << endl;)
//     }



//     return 0;
// }
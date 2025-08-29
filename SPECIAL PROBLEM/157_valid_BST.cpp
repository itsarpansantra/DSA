/*
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.

Input: root = [2,1,3]
Output: true

*/
# include<iostream>
# include<climits>
# include<queue>
using namespace std;
class Node{ // this is treeNode
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* construct(int arr[] , int n){
    queue<Node*>q;
    Node *root = new Node(arr[0]); // first node createkorlam
    q.push(root); // queue te oi element push koram
    int i=1;
    int j=2; // 2 pointer rhaklam traerse er janno

    while(q.size()>0 && i<n ){
        Node *temp = q.front();
        q.pop();
        Node *r; // akta right node 
        Node *l; // ar akta left node
        if(arr[i]!=INT_MIN) l =new Node(arr[i]); // left node push 
        else l =NULL;
        if(j!=n && arr[j]!=INT_MIN) r= new Node(arr[j]); // right node push 
        else r = NULL;
        temp->left = l; // temp r left l connect korlam
        temp->right = r;
        // abar ader k queue te push korbo
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}


// method 1 


// long long maxTree(Node *root){
//     if(root==NULL) return LLONG_MIN;
//     return max((long long)(root->val),max(maxTree(root->left),maxTree(root->right)));
// }
// long long minTree(Node *root){
//     if(root==NULL) return LLONG_MAX;
//     return min((long long)(root->val),min(minTree(root->left),minTree(root->right)));
// }
// bool valid (Node *root){ // say my bst valid or not
//     if(root==NULL) return true;
//     else if((long long)(root->val) <= maxTree(root->left)) return false;
//     else if((long long)(root->val) >= minTree(root->right)) return false;
//     return valid(root->left) && valid(root->right);
// } 

// method2 // check inorder traversal
void inorder(Node *root , Node*&prev,bool &flag){
    if(root==NULL) return;
    inorder(root->left,prev,flag);
    if(prev!=NULL){
        if(root->val<=prev->val){
            flag = false;
            return ;
        }
    }
    prev = root;
    inorder(root->right,prev,flag);
}
bool valid(Node *root){
    Node*prev = NULL;
    bool flag = true;
    inorder(root,prev,flag);
    return flag;
}
int main(){
    int arr[]={10,5,15,2,8,12,18,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = construct(arr,n);
    cout<<valid(root);
}
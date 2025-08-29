/*
Given an array of integers preorder, which represents the preorder traversal of a BST (i.e., binary search tree), construct the tree and return its root.

It is guaranteed that there is always possible to find a binary search tree with the given requirements for the given test cases.

A binary search tree is a binary tree where for every node, any descendant of Node.left has a value strictly less than Node.val, and any descendant of Node.right has a value strictly greater than Node.val.

A preorder traversal of a binary tree displays the value of the node first, then traverses Node.left, then traverses Node.right.

Input: preorder = [8,5,1,7,10,12]
Output: [8,5,10,1,7,null,12]

*/
# include<iostream>
# include<vector>
# include<queue>
# include<climits>
# include<algorithm>
using namespace std;
class Node{
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
// Node* build(vector<int>&v , int prelo,int prehi ,vector<int>&p,int inlo,int inhi){
//     if(prelo>prehi) return NULL;
//     Node* root = new Node(v[prelo]); // first node created
//     if(prelo==prehi) return root;
//     int i =inlo;
//     while(i<=inhi){
//         if(p[i]==v[prelo]) break; // i found the root in inorder
//         i++;
//     }
//     int leftcount = i-inlo;//how many element in left side in inorder 
//     int rightcount = inhi-i; // how many element in right side in inorder

//     root->left = build(v, prelo+1 ,prelo+leftcount, p,inlo,i-1);
//     root->right = build(v, prelo+leftcount+1 ,prehi , p,i+1 ,inhi);

//     return root;
// }
// Node* cons

//     vector<int>p  = v; // copy of p 
//     sort(p.begin(),p.end());
//    int n =v.size();
//    return build(v,0,n-1,p,0,n-1);
// }

// easy solution
Node *insert(Node *root , int val){
    if(root==NULL) return new Node(val);
    if(root->val >val){ // go left
       if(root->left==NULL){ // ata akdom uopre 
            Node* temp = new Node(val);
            root->left = temp;
            return root;
       }
       else insert(root->left,val); // ar ata nicha khujta thakba
    }
    else{ // root->val <val  : go right
       if(root->right==NULL){ // ata akdom uopre 
            Node* temp = new Node(val);
            root->right = temp;
            return root;
       }
       else insert(root->right,val);
    }
    return root;
}
Node* construct(vector<int>&pre){
    Node *root = new Node(pre[0]);
    for(int i=1;i<pre.size();i++){
        insert(root,pre[i]);

    }
    return root;
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={8,5,1,7,10,12}; // preorder
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    Node *a = construct(v);
    
    display(a);
}
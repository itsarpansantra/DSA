/*
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.
Input: preorder = [3,9,20,15,7], inorder = [9,3,15,20,7]
Output: [3,9,20,null,null,15,7]
Input: preorder = [-1], inorder = [-1]
Output: [-1]

*/
# include<iostream>
# include<vector>
# include<queue>
# include<climits>
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
Node* build(vector<int>&v , int prelo,int prehi ,vector<int>&p,int inlo,int inhi){
    if(prelo>prehi) return NULL;
    Node* root = new Node(v[prelo]); // first node created
    if(prelo==prehi) return root;
    int i =inlo;
    while(i<=inhi){
        if(p[i]==v[prelo]) break; // i found the root in inorder
        i++;
    }
    int leftcount = i-inlo;//how many element in left side in inorder 
    int rightcount = inhi-i; // how many element in right side in inorder

    root->left = build(v, prelo+1 ,prelo+leftcount, p,inlo,i-1);
    root->right = build(v, prelo+leftcount+1 ,prehi , p,i+1 ,inhi);

    return root;
}
Node* construct(vector<int>&v , vector<int>&p){
   int n =v.size();
   return build(v,0,n-1,p,0,n-1);
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={3,9,20,15,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int brr[]={9,3,15,20,7};
    vector<int>p(n);
    for(int i=0;i<n;i++){
        p[i]=brr[i];
    }
    Node *a = construct(v,p);
    
    display(a);
}
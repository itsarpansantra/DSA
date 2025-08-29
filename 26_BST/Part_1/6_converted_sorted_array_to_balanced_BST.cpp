/*
Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
Input: nums = [-10,-3,0,5,9]
Output: [0,-3,9,-10,null,5]
Explanation: [0,-10,5,null,-3,null,9] is also accepted:
*/
# include<iostream>
# include<climits>
# include<vector>
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
Node*helper(vector<int>&v,int lo , int hi){
    if(lo>hi) return NULL;
    int mid = lo+(hi-lo)/2;
    Node *root = new Node(v[mid]);
    root->left = helper(v,lo,mid-1);
    root->right = helper(v,mid+1,hi);
    return root;
}
Node*Balanced_BST(vector<int>&v){
int n =v.size();
return helper(v,0,n-1);
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    Node*p = Balanced_BST(v);
    display(p);
}
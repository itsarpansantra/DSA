/*
Given the root of a binary search tree and the lowest and highest boundaries as low and high, trim the tree so that all its elements lies in [low, high]. Trimming the tree should not change the relative structure of the elements that will remain in the tree (i.e., any node's descendant should remain a descendant). It can be proven that there is a unique answer.

Return the root of the trimmed binary search tree. Note that the root may change depending on the given bounds.

Input: root = [3,0,4,null,2,null,null,1], low = 1, high = 3
Output: [3,2,null,1]

*/
# include<iostream>
# include<climits>
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
void trim(Node *root , int lo , int hi){
    if(root==NULL ) return;
    while(root->left!=NULL){
        if(root->left->val<lo){
            root->left = root->left->right;
        }
        else if(root->left->val >hi){
            root->left = root->left->left;
        }
        else break;
    }
    while(root->right!=NULL){
        if(root->right->val>hi){
            root->right = root->right->left;
        }
        else if(root->right->val<lo){
            root->right = root->right->right;
        }
        else break;
    }
    trim(root->left,lo,hi);
    trim(root->right,lo,hi);
}
Node *trimBST(Node*root ,int lo , int hi){
    Node *dummy = new Node(INT_MAX);
    dummy->left = root;
    trim(dummy,lo,hi);
    return dummy->left;
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    Node *a = new Node(5);
    Node *b = new Node(3);
    Node *c = new Node(8);
    Node *d = new Node(2);
    Node *e = new Node(4);
    Node *f = new Node(6);
    Node *g = new Node(9);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    Node *p = trimBST(a,1,4);
    display(p);
}
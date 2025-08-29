/*
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
Input: p = [1,2,3], q = [1,2,3]
Output: true

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
bool isSameTree(Node *p , Node *q){
    if(p==NULL && q==NULL) return true; // ata duto te jakhn kichu thakba na
    if(p!=NULL && q==NULL) return false;// p te element acha ar q te element nay ai rakom condition
    if(p==NULL && q!=NULL) return false; 
    if(p->val !=q->val) return false;

    bool leftSubTree = isSameTree(p->left , q->left);
    if(leftSubTree == false) return false;
    bool RightSubTree = isSameTree(p->right ,q->right);
    if(RightSubTree==false) return false;
    return true;
}
/*
Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1
Output: 3
Explanation: The LCA of nodes 5 and 1 is 3.
*/
# include<iostream>
# include<vector>
# include<string>
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
bool exists(Node *root , Node *target){
    if(root==target) return true;
    if(root==NULL) return false;
    return exists(root->left,target) ||exists(root->right,target) ; // check korba target kothy 
}
Node *common_Ancestor(Node *root , Node *p , Node *q){
    if(root ==p || root == q) return root; // root jodi p ar q thaka 
    else if (exists(root->left,p) && exists(root->right,q)) return root; // jodi p left ar q right thaka
    else if (exists(root->right,p) && exists(root->left,q)) return root; // jodi q left ar p right thaka
    else if (exists(root->left,p)  && exists(root->left,q) ) return common_Ancestor(root->left,p,q); // jodi p,q 2 jona left thaka
    else  return common_Ancestor(root->right,p,q); // jodi p ar q dujona dan dika thaka

    // short processes 
    //else if (exists(root->left,p)  && exists(root->left,q) ) return common_Ancestor(root->left,p,q); // jodi p,q 2 jona left thaka
    //else if (exists(root->right,p)  && exists(root->right,q) ) return common_Ancestor(root->right,p,q); // jodi p,q 2 jona right thaka
    // return root; 
}
int main(){
    Node *a = new Node(3);
    Node *b = new Node(5);
    Node *c = new Node(1);
    Node *d = new Node(6);
    Node *e = new Node(2);
    Node *f = new Node(0);
    Node *g = new Node(8);
    Node *h = new Node(7);
    Node *i = new Node(4);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    e->left = h;
    e->right=i;
    Node *s = common_Ancestor(a,b,g);
    cout<<s->val<<" ";
}
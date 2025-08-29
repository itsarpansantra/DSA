/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

Input: root = [6,2,8,0,4,7,9,null,null,3,5], p = 2, q = 8
Output: 6
Explanation: The LCA of nodes 2 and 8 is 6.
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
Node *common_Ancestor(Node *root , Node *p , Node *q){
   if(root->val==p->val || root->val==q->val) return root;
   else if(root->val>p->val && root->val<q->val) return root;
   else if(root->val<p->val && root->val>q->val) return root;
   else if(root->val>p->val && root->val>q->val)return  common_Ancestor(root->left,p,q);
   return  common_Ancestor(root->right,p,q);


   // arakom o lekha jay
//    if(root->val>p->val && root->val>q->val)return  common_Ancestor(root->left,p,q);
//    else if(root->val<p->val && root->val<q->val)return  common_Ancestor(root->right,p,q);
//    else return root;
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
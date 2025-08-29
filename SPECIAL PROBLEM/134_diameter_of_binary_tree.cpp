/*
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them

Input: root = [1,2,3,4,5]
Output: 3
Explanation: 3 is the length of the path [4,2,1,3] or [5,2,1,3].
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
int level(Node *root){
    if(root==NULL) return 0;
    return (1+ max(level(root->left),level(root->right))); // its return every node level left ar right side
}
void helper(Node *root ,int &maxDia){ // why address because maxDia k ami change korta chay na . amni likhla ar akta veriable hoba
    // ar ami akta veriable er modha store korta chay 
    if(root ==NULL) return;
    int dia  = level(root->left) +level(root->right); // its store every node diameter 
    maxDia = max(dia,maxDia);
    helper(root->left,maxDia);
    helper(root->right , maxDia);

}
int diameter(Node *root){
    int maxDia = 0; // maxDiameter
    helper(root,maxDia);
    return maxDia;

}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<diameter(a);
    cout<<endl;
}
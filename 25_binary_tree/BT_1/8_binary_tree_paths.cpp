/*
Given the root of a binary tree, return all root-to-leaf paths in any order.

A leaf is a node with no children.

Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]
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
void helper(vector<string>&ans ,string s ,Node *root){
   if(root==NULL) return;
   string a  = to_string(root->val);
   if(root->left==NULL && root->right==NULL){
    s+=a;
    ans.push_back(s);
    return;
   }
   helper(ans,s+a+"->",root->left);
   helper(ans,s+a+"->",root->right);
}
vector<string>paths (Node *root){
    vector<string>ans;
    helper(ans,"",root);
    return ans;
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
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
    display(a);
    cout<<endl;
    vector<string>v;
    v= paths(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    
}
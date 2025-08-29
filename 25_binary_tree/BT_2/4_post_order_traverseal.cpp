/*
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,6,7,5,2,9,8,3,1]
*/
# include<iostream>
# include<vector>
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
void postorder(Node *root,vector<int>&ans){
    if(root==NULL) return;
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->val);
}
vector<int>postorder_Traversal(Node *root){
    vector<int>ans;
    postorder(root,ans);
    return ans;
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
    vector<int>v = postorder_Traversal(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }   
}
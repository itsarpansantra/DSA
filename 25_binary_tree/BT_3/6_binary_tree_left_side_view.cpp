# include<iostream>
# include<vector>
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
int levels(Node *root){
    if(root==NULL) return 0 ;
    return 1+ max(levels(root->left),levels(root->right));
}
void preorder(Node *root , vector<int>&ans,int level){ // push value when level finish
    if(root==NULL) return;
    ans[level]=root->val;
    preorder(root->right,ans,level+1);// sudhu right k aga call korechi dia left 
    preorder(root->left,ans,level+1);
}
vector<int>leftSideView(Node *root){
    vector<int>ans(levels(root),0);
    preorder(root,ans,0);
    return ans;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(4);
    Node*e = new Node(5);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;

    vector<int>v = leftSideView(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
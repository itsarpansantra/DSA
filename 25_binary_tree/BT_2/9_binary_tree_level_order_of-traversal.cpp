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
    if(root==NULL) return 0;
    return 1+ max(levels(root->left),levels(root->right));

}
void nthLevel(Node *root,int currLevel,int level,vector<int>&v){
    if(root==NULL) return;
    if(currLevel==level){
        v.push_back(root->val);
        return;
    }
    nthLevel(root->left,currLevel+1,level,v);
    nthLevel(root->right,currLevel+1,level,v);
}
void lOrder(Node *root,vector<vector<int>>&ans){
    // find number of level
    int n = levels(root);
    for(int i=1;i<=n;i++){
        vector<int>v;
        nthLevel(root,1,i,v); // sab print hoba taii i
        ans.push_back(v); // baro vector akta akta level push hoba 
        cout<<endl;
    }
}
vector<vector<int>>levelOrder(Node *root){
    vector<vector<int>>ans; 
    lOrder(root,ans);
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

    // print all level 
    vector<vector<int>>v=levelOrder(a);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
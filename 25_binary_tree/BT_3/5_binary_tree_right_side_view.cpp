/*
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.
Input: root = [1,2,3,null,5,null,4]

Output: [1,3,4]

*/

// # include<iostream>
// # include<vector>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val){
//         this->val=val;
//         this->left=NULL;
//         this->right=NULL;
//     }
// };
// int levels(Node *root){ // calculate tree level
//     if(root==NULL) return 0 ;
//     return 1+ max(levels(root->left),levels(root->right));
// }
// void nthlevel(Node *root,int level,int current,vector<int>&ans){ // return every level element
//     if(root==NULL) return;
//     if(current==level){
//         ans[current]=root->val;
//         return;
//     }
//     nthlevel(root->left,level,current+1,ans);
//     nthlevel(root->right,level,current+1,ans);
// }
// void levelOrder(Node *root,vector<int>&ans){
//     int  n = ans.size();
//     for(int i=0;i<n;i++){
//         nthlevel(root,i,0,ans);
//     }
// }
// vector<int>rightSideView(Node *root){ // calculate right side view on tree
//     vector<int>ans(levels(root),0);
//     levelOrder(root,ans);
//     return ans;
// }
// int main(){
//     Node*a = new Node(1);
//     Node*b = new Node(2);
//     Node*c = new Node(3);
//     Node*d = new Node(4);
//     Node*e = new Node(5);
//     a->left=b;
//     a->right=c;
//     b->left=d;
//     b->right=e;

//     vector<int>v = rightSideView(a);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


// preorder mehode

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
    preorder(root->left,ans,level+1);
    preorder(root->right,ans,level+1);
}
vector<int>rightSideView(Node *root){
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

    vector<int>v = rightSideView(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
/*
Given the root of a binary tree and an integer targetSum, return all root-to-leaf paths where the sum of the node values in the path equals targetSum. Each path should be returned as a list of the node values, not node references.

A root-to-leaf path is a path starting from the root and ending at any leaf node. A leaf is a node with no children.

Input: root = [5,4,8,11,null,13,4,7,2,null,null,5,1], targetSum = 22
Output: [[5,4,11,2],[5,8,4,5]]
Explanation: There are two paths whose sum equals targetSum:
5 + 4 + 11 + 2 = 22
5 + 8 + 4 + 5 = 22

*/
# include<iostream>
# include<vector>
# include<queue>
# include<climits>
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
Node* construct(int arr[] , int n){
    queue<Node*>q;
    Node *root = new Node(arr[0]); // first node createkorlam
    q.push(root); // queue te oi element push koram
    int i=1;
    int j=2; // 2 pointer rhaklam traerse er janno

    while(q.size()>0 && i<n ){
        Node *temp = q.front();
        q.pop();
        Node *r; // akta right node 
        Node *l; // ar akta left node
        if(arr[i]!=INT_MIN) l =new Node(arr[i]); // left node push 
        else l =NULL;
        if(j!=n && arr[j]!=INT_MIN) r= new Node(arr[j]); // right node push 
        else r = NULL;
        temp->left = l; // temp r left l connect korlam
        temp->right = r;
        // abar ader k queue te push korbo
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);

        i+=2;
        j+=2;
    }
    return root;
}
void helper(Node *root , vector<int>v , vector<vector<int>>&ans,int sum){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){ // leaf node 
        if(root->val==sum){
            v.push_back(root->val);
            ans.push_back(v);
        }
        return;
    }
    v.push_back(root->val);
    helper(root->left,v,ans,sum-(root->val));
    helper(root->right,v,ans,sum-(root->val));
}
vector<vector<int>>pathsum(Node *root,int targetSum){
    vector<vector<int>>ans; // return vector
    vector<int>v; // its temporary meaans all time create a new vector . every node
    helper(root,v,ans,targetSum);
    return ans;
}
int main(){
    int arr[]={5,4,8,11,INT_MIN,13,4,7,2,INT_MIN,INT_MIN,5,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node *a = construct(arr,n);
    int targetSum=22;
    vector<vector<int>>v = pathsum(a,targetSum);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
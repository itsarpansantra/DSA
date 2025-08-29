/*
Given the root of a binary tree and an integer targetSum, return the number of paths where the sum of the values along the path equals targetSum.

The path does not need to start or end at the root or a leaf, but it must go downwards (i.e., traveling only from parent nodes to child nodes).

Input: root = [10,5,-3,3,2,null,11,3,-2,null,1], targetSum = 8
Output: 3
Explanation: The paths that sum to 8 are shown.
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
void helper(Node *root ,long long sum,int &count){ // count global veriable 
    if(root==NULL) return;
        if((long long)(root->val)==sum){
            count++;
        }
    helper(root->left,sum-(long long)(root->val),count);
    helper(root->right,sum-(long long)(root->val),count);
}
int pathsum(Node *root,int targetSum){
    int count =0;
    if(root==NULL) return 0;
    helper(root,(long long)(targetSum),count); // count hochha global veriable
    count+=(pathsum(root->left,targetSum)+pathsum(root->right,targetSum));
    return count;
}
int main(){
    int arr[]={10,5,-3,3,2,INT_MIN,11,3,-2,INT_MIN,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    Node *a = construct(arr,n);
    int targetSum=8;
    cout<<pathsum(a,targetSum);
    
}
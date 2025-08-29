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
void leftBoundary(Node *root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
    cout<<root->val<<" ";
    leftBoundary(root->left); // ami left jata thakbo 
    if(root->left==NULL) leftBoundary(root->right); // jodi left null hoy tahola ami right jata thakbo . jato khan na leaf node asa

}
void leafBoundary(Node *root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)cout<<root->val<<" ";
    leafBoundary(root->left); 
    leafBoundary(root->right); 

}
void rightBoundary(Node *root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL) return ;
   
    rightBoundary(root->right); // ami right jata thakbo 
    if(root->right==NULL) rightBoundary(root->left); // jodi right null hoy tahola ami left jata thakbo . jato khan na leaf node asa
    cout<<root->val<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,7,INT_MIN,INT_MIN,8,7,8,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = construct(arr,n);
    leftBoundary(root);
    leafBoundary(root);
    rightBoundary(root->right);
}
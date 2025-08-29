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
Node* predecessor(Node *root){
    if(root->left==NULL) return NULL;
    Node *pred = root->left;
    while(pred->right!=NULL){
        pred= pred->right;
    }
    return pred;
} 
Node* successor(Node *root){
    if(root->right==NULL) return NULL;
    Node *succes = root->right;
    while(succes->left!=NULL){
        succes= succes->left;
    }
    return succes;
} 
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={10,5,20,2,8,15,25,INT_MIN,4,INT_MIN,INT_MIN,12,INT_MIN,INT_MIN,INT_MIN,3,INT_MIN,INT_MIN,13};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = construct(arr,n);
    display(root);
    cout<<endl;
    Node* p = predecessor(root);
    cout<<p->val;
    cout<<endl;
    Node* q = successor(root);
    cout<<q->val;
    
}
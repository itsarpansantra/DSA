// akta array thakba taka tree te convert korbo
# include<iostream>
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
void levelOrderQueue(Node *root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node *temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left);
        if(temp->right!=NULL) q.push(temp->right);
    }

}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9}; // INT_MIN mana NULL
    int n = sizeof(arr)/sizeof(arr[0]);
    Node *root = construct(arr,n);
    levelOrderQueue(root);
}
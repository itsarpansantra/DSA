// its known as inorder traversal

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
vector<int> inorder(Node *root){
    vector<int>ans;
    Node *curr = root;
    while(curr!=NULL){
        if(curr->left!=NULL){ // find predecessor
            Node *pred = curr->left;
            while(pred->right!=NULL && pred->right!=curr) pred = pred->right;
            if(pred->right==NULL){
                // link
                pred->right =curr;
                curr = curr->left;

            }
            else{ // pred->right = curr
                // unlink
                pred->right = NULL;
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        else{ // curr->left==NULL
            ans.push_back(curr->val);
            curr = curr->right;
        }
    }
    return ans;
}
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={10,5,15,3,8,12,20,INT_MIN,INT_MIN,6,INT_MIN,INT_MIN,13,INT_MIN,INT_MIN};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = construct(arr,n);
    display(root);
    cout<<endl;

    vector<int>v = inorder(root);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
}
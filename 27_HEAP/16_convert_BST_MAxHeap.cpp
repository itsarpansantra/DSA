# include<iostream>
# include<vector>
# include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(Node *root , vector<int>&v){
    if(root==NULL) return ;
    inorder(root->right,v);
    v.push_back(root->val);
    inorder(root->left,v);
}
void levelOrderQueue(Node *root ){ // BFS
    queue<Node*>q;
    q.push(root); // queue te first root k push kore debo
    while(q.size()>0){ // queue jatokhan na empty hoy
        Node *temp = q.front(); // queuee front j thakba taka bar kore debo . dia print korbo . 
        //temp left right check korbo dia queue te push krbo.
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL) q.push(temp->left); // left null na hola push korbo 
        if(temp->right!=NULL) q.push(temp->right); // same left

        // reverse print korala 
        // if(temp->right!=NULL) q.push(temp->right);
        // if(temp->left!=NULL) q.push(temp->left);
    }
    cout<<endl;
}
void preorder(Node *root , vector<int>&v , int &i){
    if(root==NULL) return ;
    root->val = v[i++];
    preorder(root->left,v,i);  
    preorder(root->right,v,i);
}
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(5);
    Node *c = new Node(16);
    Node *d = new Node(1);
    Node *e = new Node(8);
    Node *f = new Node(12);
    Node *g = new Node(20);
    a->left=b; a->right = c;
    b->left=d ; b->right = e;
    c->left = f; c->right = g;
    vector<int>v; // stored reverse order 
    inorder(a,v);
    display(v);
    levelOrderQueue(a);
    int i=0; // for traversing . by reference 
    preorder(a,v,i); // maxheap 
    levelOrderQueue(a);
}
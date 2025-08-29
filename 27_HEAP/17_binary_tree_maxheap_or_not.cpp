# include<iostream>
# include<queue>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        // this->left=NULL;
        // this->right=NULL;
    }
};
bool ismaxheap(Node *root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->right!=NULL && root->val<root->right->val) return false;
    return ismaxheap(root->left) && ismaxheap(root->right);
}
int sizeofTree(Node *root){
    if(root==NULL) return 0;
    return 1+sizeofTree(root->left)+sizeof(root->right);
}
bool isCBT(Node *root){
    int size = sizeofTree(root);
    int count =0;
    queue<Node*>q;
    q.push(root);
    while(count<size){
       Node *temp = q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    while(q.size()>0){
        Node *temp = q.front();
        if(temp!=NULL) return false;
        q.pop();
    }
    return true;
}
int main(){
    Node *a = new Node(20);
    Node *b = new Node(15);
    Node *c = new Node(10);
    Node *d = new Node(6);
    Node *e = new Node(9);
    Node *f = NULL;
    Node *g = new Node(8);
    a->left=b; a->right = c;
    b->left=d ; b->right = e;
    c->left = f; c->right = g;
    if(isCBT(a) && ismaxheap(a)) cout<<"Tree is a maxheap";
    cout<<"Tree is not  a max heap";
}
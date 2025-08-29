// using queue

# include<iostream>
# include<queue>
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

    levelOrderQueue(a);
    cout<<endl;
}

//normal level by level
# include<iostream>
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
void nthLevel(Node *root,int currLevel,int level){
    if(root==NULL) return;
    if(currLevel==level){
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left,currLevel+1,level);
    nthLevel(root->right,currLevel+1,level);
}
void levelOrder(Node *root){
    // find number of level
    int n = levels(root);
    for(int i=1;i<=n;i++){
        nthLevel(root,1,i); // sab print hoba taii i 
        cout<<endl;
    }
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
   levelOrder(a);
    cout<<endl;
}
# include<iostream>
# include<climits>
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
void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int max_in_tree(Node *root){
    if(root == NULL ) return INT_MIN;
    int left_max = max_in_tree(root->left);
    int right_max = max_in_tree(root->right);
    return max(root->val , max(left_max,right_max)) ;
}
int min_in_tree(Node *root){
    if(root==NULL) return INT_MAX;
    int left_node = min_in_tree(root->left);
    int right_node = min_in_tree(root->right);
    return min(root->val , min(left_node,right_node));

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
    display(a);
    cout<<endl;
    cout<<max_in_tree(a);
    cout<<endl;
    cout<<min_in_tree(a);
    cout<<endl;
}
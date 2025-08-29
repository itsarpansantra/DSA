/*
Input: root = [1,2,3,4,5,null,8,null,null,6,7,9]

Output: [4,2,6,5,7,1,3,9,8]
*/
# include<iostream>
# include<vector>
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
void inorder(Node *root,vector<int>&ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
vector<int>inorder_Traversal(Node *root){
    vector<int>ans;
    inorder(root,ans);
    return ans;
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
    vector<int>v = inorder_Traversal(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }   
}




// using stack  
// iterative solution
# include<iostream>
# include<vector>
# include<stack>
# include<algorithm>
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
vector<int>postorder_Traversal(Node *root){
    vector<int>ans;
    stack<Node*>st;
    Node*temp = root;
    //if(root!=NULL) st.push(root);
    while(st.size()>0 || temp!=NULL){
        if(temp!=NULL){
            st.push(temp);
            temp = temp->left;
        }
        else{ // node is null
            Node*p = st.top();
            st.pop();
            ans.push_back(p->val);
            temp = p->right;
        }
    }
    return ans;
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
    vector<int>v = postorder_Traversal(a);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }   
}
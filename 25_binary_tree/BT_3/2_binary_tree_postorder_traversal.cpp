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
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node* temp = st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) st.push(temp->left);
        if(temp->right!=NULL) st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
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
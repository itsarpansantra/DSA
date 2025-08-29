// its known as inorder traversal

/*
Given the root of a binary tree, flatten the tree into a "linked list":

The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
The "linked list" should be in the same order as a pre-order traversal of the binary tree

Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]

*/
# include<iostream>
# include<climits>
# include<queue>
# include<stack>
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

// method1
vector<Node*> preorder(Node*root){
    vector<Node*>ans;
    stack<Node*>st;
    if(root!=NULL) st.push(root);
    while(st.size()>0){
        Node*temp = st.top();
        st.pop();
        ans.push_back(temp);
        if(temp->right!=NULL) st.push(temp->right);
        if(temp->left!=NULL) st.push(temp->left);
    }
    return ans;
}
void flatten_1(Node*root){
    vector<Node*>ans=preorder(root);
    int n = ans.size();
    for(int i=0;i<n-1;i++){
        ans[i]->right = ans[i+1];
        ans[i]->left = NULL;
    }
}
//method 2
void flatten_2(Node*root){
    if(root==NULL) return;
    Node*l = root->left;
    Node *r = root->right;
    root->left = NULL;
    root->right =NULL;
    flatten_2(l); 
    flatten_2(r);
    // i aspet all node ar flattern . now join 
    root->right=l;
    Node *temp = root; // akta temp node l ar tail connect korch . jata tail er satha r conect korta pare
    while(temp->right!=NULL) temp = temp->right;
    temp->right = r;
}

// method 3 : moris traversal

void flatten_3(Node*root){
    if(root==NULL) return;
    Node *curr = root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            // save right
            Node *r = curr->right;
            curr->right = curr->left;
            // finding predessor
            Node *pred = curr->left;
            while(pred->right!=NULL) pred= pred->right;
            // link
            pred->right = r;
            curr= curr->left;
        }
        else curr = curr->right;
    }
    Node *temp = root;
    // left k nul banata hoba
    while(temp->right!=NULL){
        temp->left =NULL;
        temp = temp->right;
    }
}

void display(Node *root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    int arr[]={1,INT_MIN,2};//2,5,3,4,INT_MIN,6
    int n = sizeof(arr)/sizeof(arr[0]);
    Node*root = construct(arr,n);
    display(root);
    cout<<endl;
    // method1: 
    //flatten_1(root);
    //method2
    //flatten_2(root);
    //method3
    flatten_3(root);
    display(root);
    cout<<endl;
}
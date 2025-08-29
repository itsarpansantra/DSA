/*

Given a root node reference of a BST and a key, delete the node with the given key in the BST. Return the root node reference (possibly updated) of the BST.

Basically, the deletion can be divided into two stages:

Search for a node to remove.
If the node is found, delete the node.
Input: root = [5,3,6,2,4,null,7], key = 3
Output: [5,4,6,2,null,null,7]
Explanation: Given key to delete is 3. So we find the node with value 3 and delete it.
One valid answer is [5,4,6,2,null,null,7], shown in the above BST.
Please notice that another valid answer is [5,2,6,null,4,null,7] and it's also accepted.


*/
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
Node *iop(Node *root){ // iop -> inorder order predessor
    Node *pred = root->left;
    while(pred->right!=NULL){
        pred = pred->right;
    }
    return pred;
}
Node* deleteNode(Node *root,int key){
    if(root==NULL) return NULL;
    if(root->val==key){
        // case1: no child
        // kono child k delete korla tata null add kore debo
        if(root->left==NULL && root->right==NULL)return NULL;

        // case 2 : only one child

        //jai node k delete korbo tar jodi left ba right kono nodee thaka seta node connect hoye jaba ar ager node delete hoye jaba
        if(root->left==NULL || root->right==NULL){
            if(root->left!=NULL) return root->left;
            else return root->right;
        }
        
        // case 3: node has two child 
        if(root->left!=NULL && root->right!=NULL){
            // replace kore dao predecessor ba successor
            // after delete root then delete predecessor or successor
            Node *pred = iop(root);
            root->val = pred->val;

            // predecessor or succecssor always has one child or no child
            // predecessor always left side 
            root->left = deleteNode(root->left , pred->val);
        }

    }
    else if(root->val>key){
        root->left = deleteNode(root->left,key);
    }
    else{ // root->val<key
        root->right = deleteNode(root->right,key);
    }
    return root;
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
    int key = 10;
    Node* p = deleteNode(root,key);
    display(p);
}
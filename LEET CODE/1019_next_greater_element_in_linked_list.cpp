/*
You are given the head of a linked list with n nodes.

For each node in the list, find the value of the next greater node. That is, for each node, find the value of the first node that is next to it and has a strictly larger value than it.

Return an integer array answer where answer[i] is the value of the next greater node of the ith node (1-indexed). If the ith node does not have a next greater node, set answer[i] = 0.

 

Example 1:


Input: head = [2,1,5]
Output: [5,5,0]
Example 2:


Input: head = [2,7,4,3,5]
Output: [7,0,5,5,0]
*/
// this is a linked list not array but ans return in array 
# include<iostream>
# include<vector>
# include<stack>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
vector<int>next_greater(Node*head){
    vector<int>v;
    while(head!=NULL){
        v.push_back(head->val);
        head = head->next;
    }
    int n = v.size();
    vector<int>ans(n,0);
    stack<int>st; // store only index 
    for(int i=0;i<n;i++){
        while(!st.empty() && v[i]>v[st.top()]){
            ans[st.top()]=v[i];
            st.pop();
        }
        st.push(i);
    }
    return ans;
}
void display(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(2);
    Node *b = new Node(7);
    Node *c = new Node(4);
    Node *d = new Node(3);
    Node *e = new Node(5);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    vector<int>p = next_greater(a);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
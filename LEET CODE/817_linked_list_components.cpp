/*
You are given the head of a linked list containing unique integer values and an integer array nums that is a subset of the linked list values.

Return the number of connected components in nums where two values are connected if they appear consecutively in the linked list.

 

Example 1:


Input: head = [0,1,2,3], nums = [0,1,3]
Output: 2
Explanation: 0 and 1 are connected, so [0, 1] and [3] are the two connected components.
Example 2:


Input: head = [0,1,2,3,4], nums = [0,3,1,4]
Output: 2
Explanation: 0 and 1 are connected, 3 and 4 are connected, so [0, 1] and [3, 4] are the two connected components.
*/

# include<iostream>
# include<vector>
# include<unordered_set>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int components(Node*head,vector<int>&v){
    unordered_set<int>st(nums.begin(),nums.end());
    int count =0;
    while(head!=NULL){
        if(st.count(head->val) && (head->next == NULL || !st.count(head->next->val)))count++;
        head = head->next;
    }
    return count;
}
int main(){
    Node*a = new Node(0);
    Node*b = new Node(1);
    Node*c = new Node(2);
    Node*d = new Node(3);
    Node*e = new Node(4);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    vector<int>v = {0,3,1,4};
    cout<<components(a,v);
}
/*
You are given the head of a linked list.

Remove every node which has a node with a greater value anywhere to the right side of it.

Return the head of the modified linked list.

 

Example 1:


Input: head = [5,2,13,3,8]
Output: [13,8]
Explanation: The nodes that should be removed are 5, 2 and 3.
- Node 13 is to the right of node 5.
- Node 13 is to the right of node 2.
- Node 8 is to the right of node 3.
Example 2:

Input: head = [1,1,1,1]
Output: [1,1,1,1]
Explanation: Every node has value 1, so no nodes are removed.
*/
#include<iostream>
using namespace std;
class Node{
    public:
    Node*next;
    int val;
    Node(int val){
        this->val = val;
        this->next =NULL;
    }
};
Node*rev(Node*head){
    Node*prev = NULL;
    Node*curr = head;
    while(curr!=NULL){
        Node*nn = curr->next;
        curr->next = prev;
        prev = curr;
        curr=nn;
    }
    return prev;
}
Node*remove(Node*head){
    if(head==NULL) return head;
    head = rev(head); // because last node always greater 
    Node*curr = head;
    int maxval = head->val;
    while(curr->next!=NULL){
        if(maxval>curr->next->val) curr->next = curr->next->next; //compare and delete the node
        else {
            curr = curr->next; // if greater so update 
            maxval = curr->val;
        }
    }
    head = rev(head);// again reverse then show
    return head;
}
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(5);
    Node*b = new Node(2);
    Node*c = new Node(13);
    Node*d = new Node(3);
    Node*e = new Node(8);
    a->next =b;
    b->next=c;
    c->next=d;
    d->next=e;
    display(a);
    Node*p = remove(a);
    display(p);
}
/*
You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]
Example 2:

Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]
*/
# include<iostream>
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
Node * swap_number(Node *head , int k){
    Node*first = head;
    for(int i=1;i<k;i++){
        first = first->next; // find first node
    }
    Node*second = head;
    Node*fast = first;
    while(fast->next!=NULL){
        second = second->next; // find second node
        fast = fast->next;
    }
    //swapuing
    int temp = first->val;
    first->val = second->val;
    second->val = temp;
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
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next =b;
    b->next =c;
    c->next =d;
    d->next =e;
    display(a);
    Node *t =swap_number(a,2);
    display(t);
}
/*
Given the head of a singly linked list containing positive integers, your task is to swap the data of every two adjacent nodes in the list. Return the head of the modified linked list after performing pairwise swaps.

Examples:

Input:1->2->3->4->5->6->7

Output: 2->1->4->3->6->5->7 
Explanation:The linked list after swapping becomes:
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
Node*pairwise(Node*head){
    if(head==NULL || head->next==NULL) return head;
    Node*nh = head->next;
    Node*prev = NULL;
    Node*curr = head;
    while(curr && curr->next){
        Node*nn = curr->next->next;
        Node*sec = curr->next;

        // reverse pair
        sec->next = curr;
        curr->next = nn;

        // link 
        if(prev!=NULL) prev->next = sec;

        // move pointer
        prev = curr;
        curr = nn;
    }
    return nh;
}
void display(Node*head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(4);
    Node*e = new Node(5);
    Node*f = new Node(6);
    Node*g = new Node(7);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    display(a);
    Node*x = pairwise(a);
    display(x);
}
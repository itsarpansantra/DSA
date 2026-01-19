/*
You are given the head of a singly linked list of positive integers. You have to check if the given linked list is palindrome or not.

Examples:

Input:
   list 1: 1 2 1 1 2 1
Output: true
Explanation: The given linked list is 1 -> 2 -> 1 -> 1 -> 2 -> 1, which is a palindrome.
Input: 10 20 30 40 50
   
Output: false
Explanation: The given linked list is 10 -> 20 -> 30 -> 40 -> 50, which is not a palindrome.
*/
# include<iostream>
# include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};
Node*rever(Node*head){
    Node *curr = head;
    Node *pre = NULL;
    Node *Next = NULL;
    while(curr!=NULL){
        Next = curr->next;
        curr->next =pre;
        pre = curr;
        curr = Next;
    }
    return pre;
}
bool palindrome(Node *head){
    Node*slow = head; // slow point in left middle 
    Node*fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node*newhead = rever(slow->next); // after slow part reverse it 
    // then check both are equal are not if equal return true
    Node *a = head;
    Node*b = newhead;
    while(b!=NULL){
        if(a->val!=b->val) return false;
        a = a->next;
        b = b->next;
    }
    return true;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(1);
    Node *d = new Node(1);
    Node *e = new Node(2);
    Node *f = new Node(1);

    a->next =b;
    b->next =c;
    c->next =d;
    d->next =e;
    e->next =f;
    display(a);
   // Node *t = a;
    cout<<palindrome(a);
    //display(t);
    //cout<<a->val<<endl;
}
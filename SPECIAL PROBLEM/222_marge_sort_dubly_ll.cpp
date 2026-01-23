/*
Given Pointer/Reference to the head of a doubly linked list, the task is to Sort the given doubly linked list using Merge Sort in both non-decreasing and non-increasing order.

Note: Return the head of the sorted non-decreasing doubly linked list. The driver code will print it forward and backward in both directions.

Examples:

Input: LinkedList: 7 ↔ 3 ↔ 5 ↔ 2 ↔ 6 ↔ 4 ↔ 1 ↔ 8
Output:
LinkedList: 1 ↔ 2 ↔ 3 ↔ 4 ↔ 5 ↔ 6 ↔ 7 ↔ 8
LinkedList: 8 ↔ 7 ↔ 6 ↔ 5 ↔ 4 ↔ 3 ↔ 2 ↔ 1
Explanation: After sorting the given linked list in both ways, the resultant matrix will be as shown in the first two lines of the output. The first line shows the output for non-decreasing order, and the next line shows the output for non-increasing order.

Input: LinkedList: 9 ↔ 15 ↔ 0 ↔ -1 ↔ 0
Output:
LinkedList: -1 ↔ 0 ↔ 0 ↔ 9 ↔ 15
LinkedList: 15 ↔ 9 ↔ 0 ↔ 0 ↔ -1
Explanation: After sorting the given linked list in both ways, the resultant list will be -1 → 0 → 0 → 9 → 15 in non-decreasing order and 15 → 9 → 0 → 0 → -1 in non-increasing order.

*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
Node*marge(Node*a,Node*b){
    Node*c = new Node(100);
    Node*tempc = c;
    Node*tempa = a;
    Node*tempb = b;
    while(tempa && tempb){
        if(tempa->val<tempb->val){
            tempc->next = tempa;
            tempa->prev = tempc;
            tempc = tempc->next;
            tempa = tempa->next;
        }
        else{
            tempc->next = tempb;
            tempb->prev = tempc;
            tempc = tempc->next;
            tempb = tempb->next;
        }
    }
    if(tempa==NULL) {
        tempc->next = tempb;
        tempb->prev = tempc;
    }
    else{
        tempc->next = tempa;
        tempa->prev = tempc;
    }
    Node* head = c->next;
    head->prev = NULL;
    return head;
}
Node*sort(Node*head){
    if(head==NULL || head->next==NULL) return head;
    Node*slow = head;
    Node*fast = head;
    while(fast->next && fast->next->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node*a = head;
    Node*b = slow->next;
    slow->next = NULL;
    b->prev = NULL;
    a = sort(a);
    b = sort(b);
    Node*c = marge(a,b);
    return c; 
}
Node*marge_sort(Node*head){
    head= sort(head);
    //head = reverse(head);
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
    Node*a = new Node(7);
    Node*b = new Node(3);
    Node*c = new Node(5);
    Node*d = new Node(2);
    Node*e = new Node(6);
    Node*f = new Node(4);
    Node*g = new Node(1);
    Node*h = new Node(8);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;

    h->prev = g;
    g->prev = f;
    f->prev = e;
    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    Node *p =marge_sort(a);
    display(p);

}
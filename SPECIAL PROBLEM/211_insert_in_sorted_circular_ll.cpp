/*
Given a sorted circular linked list, the task is to insert a new node in this circular linked list so that it remains a sorted circular linked list.

Examples:

Input: head = 1->2->4, data = 2
Output: 1->2->2->4
Explanation: We can add 2 after the second node.

Input: head = 1->4->7->9, data = 5
Output: 1->4->5->7->9
Explanation: We can add 5 after the second node.
*/
# include<iostream>
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
Node*insertElementCircular(Node*head,int val){ // dont run go infinite loop
    Node*c = new Node(val);
    if(head==NULL){
        c->next = c; // because circular linked list
        return c;
    }
    // insert in first
    Node*temp = head;
    if(temp->val>=val){
        while(temp->next!=head){
            temp = temp->next;
        }
        temp->next = c;
        c->next = head;
        head= c;
        return head;
    }
    // insert any position and last
    temp = head;
    while(temp->next!=head && temp->next->val<val){
        temp = temp->next;
    }
    c->next = temp->next;
    temp->next = c;
    return head;
}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(2);
    Node*d = new Node(3);
    Node*e = new Node(4);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=a;
    display(a);
    insertElementCircular(a,3);
    display(a);
}
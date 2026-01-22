/*
Given two linked lists (L1 & L2), your task is to complete the function makeUnion(), which returns the union list of two linked lists. This union list should include all the distinct elements only and it should be sorted in ascending order.

Examples:

Input: L1 = 9->6->4->2->3->8, L2 = 1->2->8->6->2
Output: 1 -> 2 -> 3 -> 4 -> 6 -> 8 -> 9

Explanation: All the distinct numbers from two lists, when sorted form the list in the output. 
Input: L1 = 1->5->1->2->2->5, L2 = 4->5->6->7->1
Output: 1 -> 2 -> 4 -> 5 -> 6 -> 7

Explaination: All the distinct numbers from two lists, when sorted forms the list in the output.
*/
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void inserAtEnd(Node *&head , int val){
    Node *ptr = new Node(val);
    if (head==NULL) { // check linkedlist empty or not
        head = ptr;
        return;
    }
    Node* temp = head;
    while (temp->next!=NULL){
         temp = temp->next; // basically oi lister NULL ager node temp thakba 
    }
    temp->next = ptr; // ar oi temper last amar node ta add hoye jaba
}
Node* merge(Node *head1 , Node*head2){
    Node *c = new Node(100);
    Node *tempc = c;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            tempc->next = head1;
            head1= head1->next;
            tempc = tempc->next;
        }
        else{
            tempc->next = head2;
            head2= head2->next;
            tempc = tempc->next;
        }
    }
    if(head1==NULL)tempc->next = head2;
    else tempc->next = head1;
    return c->next;
}
Node *sort(Node *head){
    //base case
    if(head==NULL || head->next==NULL) return head;
    Node *slow = head;
    Node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){ // first is for odd ar second for even
        // find left middle
        slow=slow->next;
        fast=fast->next->next;
    }
    Node *a = head;
    Node*b =slow->next;
    slow->next=NULL; // first r ja list ta hoba tar last null point koredilam . to 2 to list vag hoye galo
    a= sort(a);
    b= sort(b);
    Node *c = merge(a,b);
    return c;
}
Node*union_ofLL(Node*head1,Node*head2){
    if(head1==NULL )return sort(head1);
    if(head2==NULL) return sort(head2);
    head1 = sort(head1);
    head2 = sort(head2);
        
    Node*t = new Node(100);
    Node*tempt = t;
    Node*a = head1;
    Node*b = head2;
        
    while(a && b){
        if(a->data==b->data){ // both list value equal then connect one list and update both list
            tempt->next = new Node(a->data);
            tempt = tempt->next;
            int val = a->data;
            while(a && a->data == val) a = a->next;
            while(b && b->data == val) b = b->next;
        }
        else if(a->data<b->data){ // if a less and b greater
            tempt->next = new Node(a->data);
            tempt = tempt->next;
            int val = a->data;
            while(a && a->data == val) a = a->next; // if a both value are equal then update
        }
        else{
            tempt->next = new Node(b->data);
            tempt = tempt->next;
            int val = b->data;
            while(b && b->data == val) b = b->next; // b both value same then update
        }
    }
    while(a){ // a finish b has value
    tempt->next = new Node(a->data);
        tempt = tempt->next;
        int val = a->data;
        while(a && a->data == val) a = a->next; // for same element
    }
    while(b){ // b finish a has a value
        tempt->next = new Node(b->data);
        tempt = tempt->next;
        int val = b->data;
        while(b && b->data == val) b = b->next; // for same element
    }    
    return t->next;
}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    Node *head2=NULL;

    // first list
    inserAtEnd(head1,9);
    inserAtEnd(head1,6);
    inserAtEnd(head1,4);
    inserAtEnd(head1,2);
    inserAtEnd(head1,3);
    inserAtEnd(head1,8);
    display(head1);
    // second list
    inserAtEnd(head2,1);
    inserAtEnd(head2,2);
    inserAtEnd(head2,8);
    inserAtEnd(head2,6);
    inserAtEnd(head2,2);
    inserAtEnd(head2,11);
    
    display(head2);

    Node *a;
    a= union_ofLL(head1,head2);
    display(a);
}
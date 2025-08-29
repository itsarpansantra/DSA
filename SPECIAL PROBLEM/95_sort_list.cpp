/*
Given the head of a linked list, return the list after sorting it in ascending order.
Input: head = [4,2,1,3]
Output: [1,2,3,4]
*/
#include<iostream>
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
Node* merge(Node *head1 , Node*head2){
    Node *c = new Node(100);
    Node *tempc = c;
    while(head1!=NULL && head2!=NULL){
        if(head1->val<=head2->val){
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
    if(head1==NULL){
         tempc->next = head2;
     }
    else{
         tempc->next = head1;
    }
    return c->next;
}
Node *sort(Node *head){
    //base case
    if(head==NULL || head->next==NULL) return head;
    // To find the left middle
    Node *slow = head;
    Node *fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){ // first is for odd ar second for even
        // find left middle
        slow=slow->next;
        fast=fast->next->next;
    }
    // now slow is left middle

    // 2to part vanga dilam 
    Node *a = head;
    Node*b =slow->next;
    slow->next=NULL; // first r ja list ta hoba tar last null point koredilam . to 2 to list vag hoye galo

    //recursion

    a= sort(a);
    b= sort(b);
    // ai rakom korla 2 to list sort hoye chola asba 

    // dia marge sort kore debo

    Node *c = merge(a,b);
    return c;
}
int main(){
    Node*a = new Node(5);
    Node*b = new Node(1);
    Node*c = new Node(3);
    Node*d = new Node(6);
    Node*e = new Node(2);
    Node*f = new Node(4);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    display(a);
    Node*p =sort(a);
    display(p);
}
 
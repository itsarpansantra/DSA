/*
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.

 

Example 1:


Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
Example 2:


Input: head = [1,1,1,2,3]
Output: [2,3]
 
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
Node* duplicate(Node *head){
   // first check head null or not 
   if(head==NULL || head->next==NULL) return head;

   // now check if 2 element present both are same or not 
   while(head!=NULL && head->next!=NULL && head->val==head->next->val ){
        int x = head->val;
        while(head!=NULL && x ==head->val){
            head = head->next;
        }
   }
   if(head==NULL) return NULL;
   // for traverseing use two pointer
   Node *a = head;
   Node *b = head->next;
    while(b!=NULL&&b->next!=NULL ){ 
        if(b->val==b->next->val){// present or next both are same 
            int x = b->val;
            while(b!=NULL && b->val==x){ // for checking
                b = b->next; // equal then increment 
            }
            a->next=b; // connect with node . same element disconnect
        }
        else{ // both element are not same unique . add on list and continue
            a=b; 
            b= b->next;
        }
    }
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
    Node*b = new Node(1);
    Node*c = new Node(2);
    Node*d = new Node(3);
    Node*e = new Node(3);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    Node *p = duplicate(a);
    display(p);
}
/*
Given a linked list, you have to perform the following task:

Extract the alternative nodes starting from the second node.
Reverse the extracted list.
Append the extracted list at the end of the original list.
Note: Try to solve the problem without using any extra memory.

Examples:

Input: LinkedList: 10->4->9->1->3->5->9->4
Output: 10->9->3->9->4->5->1->4

Explanation: Alternative nodes in the given linked list are 4,1,5,4. Reversing the alternative nodes from the given list, and then appending them to the end of the list results in a list 10->9->3->9->4->5->1->4.
*/
// alternate node create another list and then reverse it then attach original list
# include<iostream>
using namespace std;
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
Node*reverse(Node*head){
    Node*curr = head;
    Node*pre = NULL;
    while(curr){
       Node*n = curr->next;
        curr->next = pre;
        pre = curr;
        curr=n;
    }
    return pre;
}
void rearrange(Node* head) {
    if(head==NULL || head->next==NULL) return;
    Node*c = new Node(100);
    Node*tempc = c;
    Node*prev = head;
    while(prev && prev->next){
        Node*temp = prev->next;
        prev->next = temp->next;
        tempc->next = temp;
        tempc = temp;
        prev = prev->next;
    }
    tempc->next = NULL;
    Node*x = reverse(c->next);
    Node*tail = head;
    while(tail->next) tail = tail->next;
    tail->next = x;
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
    Node*p =rearrange(a);
    display(p);
}
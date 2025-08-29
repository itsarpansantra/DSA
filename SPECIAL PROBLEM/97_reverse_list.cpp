/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
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
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node *reverse(Node *head){
    // recursive solution
    if(head==NULL || head->next==NULL) return head; // base case
    Node *newHead = reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newHead;

    //iterative solution

    // Node *current =head;
    // Node *previous = NULL;
    // Node *Next =NULL;

    // while(current!=NULL){
    //     Next = current->next;
    //     current->next=previous;
    //     previous = current;
    //     current=Next;
    // }
    // return previous;
}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    Node*f = new Node(60);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    Node*p =reverse(a);
    display(p);
}
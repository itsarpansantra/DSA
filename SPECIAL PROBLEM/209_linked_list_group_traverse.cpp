/*
You are given the head of a Singly linked list. You have to reverse every k node in the linked list and return the head of the modified list.
Note: If the number of nodes is not a multiple of k then the left-out nodes at the end, should be considered as a group and must be reversed.

Examples:

Input: k = 2,
   

Output: 2 -> 1 -> 4 -> 3 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 2.


Input: k = 4,   

Output: 4 -> 3 -> 2 -> 1 -> 6 -> 5
Explanation: Linked List is reversed in a group of size k = 4.
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
Node *reverseKGroup(Node *head, int k) {
    Node*nh = NULL;
    Node*pgt = NULL;
    Node*curr = head;
    while(curr!=NULL){
        Node*prev = NULL;
        Node*temp =  curr;
        int count =0;
        while(temp!=NULL && count<k){ // reverse all node with group 
            Node*nn = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nn;
            count++;
        }
        if(nh==NULL) nh = prev;
        if(pgt!=NULL) pgt->next = prev;
        pgt = curr;
        curr= temp;
    }
    return nh;
}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    Node*f = new Node(60);
    Node*g = new Node(70);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    display(a);
    int k =3;
    Node*p =reverseKGroup(a,k);
    display(p);
}
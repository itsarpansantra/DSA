/*
Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.
Input: head = [1,2,3,4,5]
Output: 3
Explanation: The middle node of the list is node 3.
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
Node* middlenode(Node *head){
    int length = 0;
    Node *temp =head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    Node *mid = head;
    int midIdx = length/2;
    for(int i=1;i<=midIdx;i++){
        mid = mid->next;
    }
    return mid;

}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    Node* p;
    p = middlenode(a);
    cout<<p->val;
}
/*
You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

Example 1:


Input: head = [1,3,4,7,1,2,6]
Output: [1,3,4,1,2,6]
Explanation:
The above figure represents the given linked list. The indices of the nodes are written below.
Since n = 7, node 3 with value 7 is the middle node, which is marked in red.
We return the new list after removing this node. 
Example 2:


Input: head = [1,2,3,4]
Output: [1,2,4]
Explanation:
The above figure represents the given linked list.
For n = 4, node 2 with value 3 is the middle node, which is marked in red.
Example 3:


Input: head = [2,1]
Output: [2]
Explanation:
The above figure represents the given linked list.
For n = 2, node 1 with value 1 is the middle node, which is marked in red.
Node 0 with value 2 is the only node remaining after removing node 1.
*/
# include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
Node * middle(Node *head){
    if(head==NULL || head->next==NULL) return NULL;
    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next=slow->next;
    slow=NULL;
    return head;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head= head->next;
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(7);
    Node *e = new Node(1);
    Node *f = new Node(2);
    Node *g = new Node(6);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    Node *head = a;
    display(a);
    Node *p = middle(a);
    display(p);
}
/*
Given the head of a singly linked list, the task is to remove a cycle if present. A cycle exists when a node's next pointer points back to a previous node, forming a loop. Internally, a variable pos denotes the index of the node where the cycle starts, but it is not passed as a parameter. The terminal will print true if a cycle is removed otherwise, it will print false.

Examples:

Input: head = 1 -> 3 -> 4, pos = 2
Output: true
Explanation: The linked list looks like

A loop is present in the list, and it is removed.
Input: head = 1 -> 8 -> 3 -> 4, pos = 0
Output: true
Explanation: 

The Linked list does not contains any loop. 
Input: head = 1 -> 2 -> 3 -> 4, pos = 1
Output: true
Explanation: The linked list looks like 

A loop is present in the list, and it is removed.
*/
# include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void removeLoop(Node* head) {
    if(head==NULL || head->next==NULL) return;
    bool flag = false;
    Node*slow = head;
    Node*fast = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            flag = true;
            break;
        }
    }
    if(flag==false) return;
    slow = head;
    if(slow==fast){
        while(fast->next!=slow){
            fast = fast->next;
        }
    }
    else{
        while(fast->next!=slow->next){
            slow = slow->next;
            fast= fast->next;
        }
    }
    fast->next = NULL;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next = b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=d;
    removeLoop(a);
    //cout<<p->val;
}
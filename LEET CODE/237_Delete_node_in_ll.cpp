/*
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.
Custom testing:

For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.
*/


// question basically says that i have a target node . dont access head node . and i delete target node 
// so what i do target ja value ta acha oi ta k parere node dia dibo . dia oi node ta kay delete kore debo

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
void deleteNode(Node *target){ // given target node
    target->val=target->next->val;
    target->next=target->next->next;
}
void display(Node *a){
    while(a!=NULL){
        cout<<a->val<<" ";
        a=a->next;
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    Node*head=a;

    display(a);
    deleteNode(c);
    display(a);
}
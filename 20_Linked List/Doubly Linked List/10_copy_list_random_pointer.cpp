 /*
A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.

Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]

*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node *random;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->random=NULL;
    }
};
Node *copy_list_random(Node *head){
// create a deep copy without random pointer
    Node *c = new Node(100); // c=dummy
    Node *tempc =c;
    Node *temp =head;
    while(temp!=NULL){
        Node *a = new Node (temp->val);
        tempc->next = a;
        tempc = tempc->next;
        temp = temp->next;
    }
    Node *duplicate = c->next;
    //step2:  create alternate node . means merge the node
    Node *a = head;
    Node *b = duplicate;
    c=new Node (-1);
    Node *tempd = c;
    while(a){
        
        tempd->next =a;
        a=a->next;
        tempd = tempd->next;
        tempd->next =b;
        b=b->next;
        tempd = tempd->next;
    }
    c= c->next;

    // step3: assign random pointer

    Node *t1 = c; // traverse original list 
    while(t1!=NULL) { 
       Node * t2 = t1->next; // t2 is for duplicate
        if(t1->random) t2->random = t1->random->next;
        t1 = t1->next->next;
    }


    // ste4: remove the connection (separate)

    Node *d1 = new Node(100);
    Node *d2 = new Node(100);
    Node *p1 =d1;
    Node *p2=d2;
    Node *t = c;
    while(t!=NULL){
        p1->next=t;
        t=t->next;
        p1=p1->next;
        p2->next=t;
        t=t->next;
        p2=p2->next;
    }
    p1->next=NULL;
    p2->next=NULL;
    d1 = d1->next;
    d2 = d2->next;
    return d2;
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
    Node*a = new Node(7);
    Node*b = new Node(13);
    Node*c = new Node(11);
    Node*d = new Node(10);
    Node*e = new Node(1);


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    Node *p =copy_list_random(a);
    display(p);

}
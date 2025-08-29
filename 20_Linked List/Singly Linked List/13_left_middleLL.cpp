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
    Node *slow = head;
    Node *fast = head;
    while(fast->next->next!=NULL){ // for left middle find even number of length
        slow = slow->next;
        fast= fast->next->next;
    }
    return slow;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    Node* p;
    p = middlenode(a);
    cout<<p->val;
}
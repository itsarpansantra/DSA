//Given the head of a linked list, remove the nth node from the end of the list and return its head.
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
Node * remove(Node *head , int n){
    Node*slow = head;
    Node*fast = head;
    // traverse starting to n+1 steps 
    for (int i=1;i<=n+1;i++){
        if(fast==NULL) return head->next; // this for n=1 . 
        fast = fast->next;
    }
    // next starting slow and fast go same space 

    while(fast!=NULL){
        slow = slow->next;
        fast=fast->next;
    }
    // now slow pointer just behind of nth pointer from left 
    slow->next= slow->next->next;
    return head;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->next =b;
    b->next =c;
    c->next =d;
    d->next =e;

    Node *t = a;
    a = remove(a,3);
    display(a);
    //cout<<a->val<<endl;
}
/*
Given the head of a singly linked list and two integers left and right where left <= right, reverse the nodes of the list from position left to position right, and return the reversed list.
Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]
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
Node *reverse(Node *head){
    Node *current =head;
    Node *previous = NULL;
    Node *Next =NULL;

    while(current!=NULL){
        Next = current->next;
        current->next=previous;
        previous = current;
        current=Next;
    }
    return previous;
}
Node * reverseBetween(Node *head, int left ,int right){
    if(left==right) return head;
    Node *a =NULL;
    Node *b =NULL;
    Node *c =NULL;
    Node *d =NULL;
    Node *temp = head;
    int count =1;

    while(temp!=NULL){
        if(count==left-1) a =temp;
        if(count==left) b=temp;
        if(count==right) c=temp;
        if(count==right+1) d = temp;
        temp =temp->next;
        count++;
    }
    if(a!=NULL)a->next=NULL;
    c->next=NULL;

    c = reverse(b);

    if(a!=NULL)a->next=c;
    b->next=d;
    if(a!=NULL)return head;
    return c;

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
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(50);
    Node*d = new Node(40);
    Node*e = new Node(30);
    Node*f = new Node(60);
    Node*g = new Node(70);
    Node*h = new Node(80);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    int left,right;
    cout<<"Enter left idx: ";
    cin>>left;

    cout<<"enter right idx: ";
    cin>>right;

    display(a);
    Node*p =reverseBetween(a,left,right);
    display(p);
}
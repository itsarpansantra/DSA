// amaka akta sorted list doa thakba ar sekhana ar sekhana duplicate element doa thakba . sai duplicate element remove kore list return korbo
//Input: head = [1,1,2,3,3]
//Output: [1,2,3]

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
void duplicate(Node *head){
    if(head==NULL || head->next==NULL) return;
    Node *a =head;
    Node *b=head->next;
    while(b!=NULL){
         while( b!=NULL && b->val==a->val){
        b= b->next;
    }
    a->next=b;
    a=b;
    if(b!=NULL)b=b->next;
    }
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
    Node*a = new Node(1);
    Node*b = new Node(1);
    Node*c = new Node(2);
    Node*d = new Node(3);
    Node*e = new Node(3);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    duplicate(a);
    display(a);
}
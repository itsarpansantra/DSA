//Given the head of a linked list, rotate the list to the right by k places.
//Input: head = [1,2,3,4,5], k = 2
//Output: [4,5,1,2,3]
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
Node* rotate(Node *head,int k){
    if(head==NULL || head->next==NULL) return head;
  Node*temp = head;
  Node *tail=NULL;
  int n=0; // calculate length of LL 
  while(temp!=NULL){
    if(temp->next ==NULL ) tail = temp;
    temp=temp->next;
    n++;
  }
   k = k%n;
   if(k==0) return head;
  temp = head;
  for(int i=1;i<n-k;i++){
    temp=temp->next;
  }
    tail->next=head;
    head=temp->next;
    temp->next=NULL;
    return head;
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
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(4);
    Node*e = new Node(5);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    Node*p =rotate(a,2);
    //cout<<p->val;
    display(p);
}
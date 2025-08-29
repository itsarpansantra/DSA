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
Node * find(Node *head , int n){
    int length=0;
    Node*temp = head;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    // n th from end = (length-n+1) start
    int m = length-n+1; // maybe my m =5 . so idx m-1 
    int idx =m-1; // index node to be find or delete

   temp=head;
   for(int i=1;i<=idx;i++){
    temp= temp->next;
   }
   return temp;
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
    a = find(a,3);
    cout<<a->val<<endl;
}
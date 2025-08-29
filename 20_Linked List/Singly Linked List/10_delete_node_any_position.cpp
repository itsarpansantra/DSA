// # include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void deleteNode(Node *head , Node*target){ // not for head node
//     Node *temp =head;
//     while(temp->next!=target){
//         temp=temp->next;
//     }
//     temp->next = temp->next->next;
// }
// void display( Node *head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     display(a);
//     deleteNode(a,d);
//     display(a);
// }
// # include<iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// Node*deleteNode(Node *head , Node*target){ // head node o delete hoba 
//    if(head==target) {
//     head=head->next;
//     return head;
//    }
//     Node *temp =head;
//     while(temp->next!=target){
//         temp=temp->next;
//     }
//     temp->next = temp->next->next;
//     return head;
// }
// void display( Node *head){
//     while(head!=NULL){
//         cout<<head->val<<" ";
//         head=head->next;
//     }
//     cout<<endl;
// }
// int main(){
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     Node *c = new Node(30);
//     Node *d = new Node(40);

//     a->next=b;
//     b->next=c;
//     c->next=d;

//     Node*head=a;

//     display(head);
//     head=deleteNode(head,a);
//     display(head);
// }


// abar sudhu amaka head node ar target value dia dicha . oi taka delet korta hoba
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
Node*deleteNode(Node *head , int targetValue){ // head node o delete hoba 
   if(head->val==targetValue) {
    head=head->next;
    return head;
   }
    Node *temp =head;
    while(temp->next->val!=targetValue){
        temp=temp->next;
    }
    temp->next = temp->next->next;
    return head;
}
void display( Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
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

    display(head);
    head=deleteNode(head,30);
    display(head);
}
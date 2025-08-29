# include<iostream>
using namespace std;
class Node{ // user defiend data type
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{// user defiend data structure
    public:
    Node*head;
    Node*tail;
    int size;

    LinkedList(){
        head=tail=NULL; // initially all are empty
        size=0;
    }

    void insertAtEnd(int val){
        Node *temp = new Node(val); // create a new node
        if(size==0) (head=tail=temp);
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    LinkedList ll; // user defiend data structure
    ll.insertAtEnd(10); // {10->NULL}
    ll.insertAtEnd(20); // {10->20->NULL}
    ll.display();
}


// if we do manually . only given head node

// class Node{
//     public:
//     int val;
//     Node*next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node* head){
//     Node*temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// void insertAtEnd(Node *head , int val){
//     Node *t=new Node(val); // ata akta nutun linked list banalam
//     while(head->next!=NULL) head=head->next; // ai ta te ami linked list last node ta khujbo 
//     head->next=t;// last node er satha nutun ja node baniachi seta add kore debo
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
//     insertAtEnd(a,50);
// }
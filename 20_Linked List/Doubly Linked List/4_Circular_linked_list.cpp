// dont run this code goes infinite loop
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class CircularLL{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;

    void insertAtEnd(int val){
       // Node *temp =head;
        Node *t = new Node(val);
        if(size==0){
            head = tail = t;
            t->next=head;
        } 
        // while(temp->next!=head){
        //     temp = temp->next;
        // }
        tail->next=t;
        t->next=head;
        tail=t;
        size++;
    }
    void display(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }

};
int main(){
    CircularLL ll;
    ll.insertAtEnd(30);
    ll.insertAtEnd(20);
    ll.insertAtEnd(70);
    ll.display();
}
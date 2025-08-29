// // dont run this code goes infinite loop
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
        this->prev=NULL;
    }
};

class CircularDoublyLL{
    public:
    Node *head=NULL;
    Node *tail=NULL;
    int size=0;

    void insertAtEnd(int val){
        Node *t = new Node(val);
        if(size==0){
            head = tail = t;
            t->next=t;
               t->prev=t;
        } 
        tail->next=t;
        t->prev=tail;
        t->next=head;
        head->prev=t;
        tail=t;
        size++;
    }
    void display(){
        Node* temp = head;
        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while (temp != head);

        cout << endl;
    }

};
int main(){
    CircularDoublyLL ll;
    ll.insertAtEnd(30);
    ll.insertAtEnd(20);
    ll.insertAtEnd(70);
    ll.display();
}


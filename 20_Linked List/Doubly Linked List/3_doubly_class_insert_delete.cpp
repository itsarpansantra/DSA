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
class DoublyLinkedList{
    public:
    Node*head;
    Node*tail;
    int size;
    DoublyLinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node *temp = new Node( val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail; // extra 
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node *temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
    void insertAtMiddle(int val,int idx){
        Node *temp = new Node(val);
        if(idx>size ||idx<0 ) cout<<"invalid idx";
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node *temp = new Node(val);
            Node *t = head; // this for traverse
            for(int i=1;i<=idx-1;i++){
                t =t->next;
            }
            temp->next=t->next;
            t->next=temp;
            temp->prev=t;
            temp->next->prev=temp;
            size++;
        }
    }
    void dleteAtLast(){
        if(size==0){
            cout<<"List is empty !";
            return ;
        }
        Node *temp =head;
        while(temp->next!=tail){
            temp =temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteAtHead(){
        if(size==0){
            cout<<"List is empty !";
            return ;
        }
        head = head->next;
        head->prev=NULL;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size==0){
            cout<<"List is empty !";
            return ;
        }
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) dleteAtLast();
        else{
            Node *temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;

            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            size--;
        }
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
    DoublyLinkedList DLL;
    DLL.insertAtTail(10);
    DLL.insertAtTail(20);
    DLL.display();
    DLL.insertAtHead(30);
    DLL.insertAtHead(25);
    DLL.insertAtHead(15);
    DLL.display();
    DLL.insertAtMiddle(40,2);
    DLL.display();
    DLL.dleteAtLast();
    DLL.display();
    DLL.deleteAtHead();
    DLL.display();
    DLL.deleteAtIdx(2);
    DLL.display();
}
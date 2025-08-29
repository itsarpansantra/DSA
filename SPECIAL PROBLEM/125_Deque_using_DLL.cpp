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
class Deque{
    public:
    Node*head;
    Node*tail;
    int s;
    Deque(){
        head=tail=NULL;
        s=0;
    }
    void PushBack(int val){ // meaning insert at end
        Node *temp = new Node( val);
        if(s==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail; // extra 
            tail=temp;
        }
        s++;
    }
    void PushFront(int val){ // insert at head
        Node *temp=new Node(val);
        if(s==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void popBack (){//dleteAtLast
        if(s==0){
            cout<<"List is empty !";
            return ;
        }
        Node *temp =head;
        while(temp->next!=tail){
            temp =temp->next;
        }
        temp->next=NULL;
        tail=temp;
        s--;
    }
    void popFront (){//deleteAtHead
        if(s==0){
            cout<<"List is empty !";
            return ;
        }
        head = head->next;
        head->prev=NULL;
        s--;
    }
     int front(){
        if(s==0) {
            cout<<" Queue is empty ";
            return -1 ;
        }
        return head->val; 
    }
    int back(){
        if(s==0) {
            cout<<" Queue is empty ";
            return -1 ;
        }
        return tail->val; 
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
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
    Deque de; 
    de.PushBack(10);
    de.PushBack(20);
    de.PushBack(30);
    de.display();
    de.PushBack(40);
    de.PushBack(50);
    de.display();
    de.popBack();
    de.display();
}
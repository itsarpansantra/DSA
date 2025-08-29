# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

class linkedlist{
    public:
    Node *head;
    Node *tail;
    int size;

    linkedlist(){
        head=tail=NULL;
        size=0;
    }

    void insertAtTail(int val){ // isert value at last
        Node *temp = new Node(val);
        if(size==0) (head=tail=temp);
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node *temp = new Node(val);
        if(size==0) (head=tail=temp);
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }


    void insertAtMiddle(int idx , int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node *t = new Node(val);// creat a new node insert at any place
            Node *temp = head; // 
            for(int i=1;i<=idx-1;i++){ // find temp . means temp goes input index just before index . 
                temp=temp->next;
            }
            t->next=temp->next; // first connect new node to index node 
            temp->next=t; // before index node to new node 
            size++;
        }
        
    }
    int getvalue(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid index"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node *temp = head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;

            }
            return temp->val;
        }
    }

    void deleteHead(){ // delete at first node 
        if(size==0) {
            cout<<" List is empty ";
            return ;
        }
        head=head->next; // we lost access head node
        size--;
    }

    void deleteTail(){ // delete last node
         if(size==0) {
            cout<<" List is empty ";
            return ;
        }
        Node *temp =head;

        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx){
        if(size==0){
            cout<<"list is empty";
            return;
        }
        else if(idx<0 || idx>=size){
            cout<<"Invalid index";
            return ;
        }
        else if(idx==0) deleteHead();
        else if(idx==size-1) deleteTail();
        else{
            Node *temp = head;
            for(int i=1;i<=idx-1;i++){
                temp = temp->next;
            }
            temp->next= temp->next->next;
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
    linkedlist ll;
    ll.insertAtTail(60);
    ll.insertAtTail(70);
    ll.insertAtTail(100);
    ll.display();
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtMiddle(3,50);
    ll.insertAtMiddle(5,90);
    ll.display();
    //cout<<ll.getvalue(2);
    ll.deleteHead();
    ll.display();
    ll.deleteTail();
    ll.display();
    ll.deleteAtIndex(4);
    ll.display();
}
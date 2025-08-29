# include<iostream>
using namespace std;
// recursive print 
class Node{
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linked_List{
    public:
    Node *head;
    Node *tail;
    int size;
    Linked_List(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node *temp =new Node (val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;

    }
    void insertAtTail(int val){
        Node *temp = new Node(val);
        if(size==0) head= tail =NULL;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtMiddle(int val,int idx){
        if(idx<0 || idx>size) cout<<"insert not possible "<<endl;  
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else{
            Node *temp =new Node(val);
            Node *t = head;
            for(int i=1;i<=idx-1;i++){
                t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
            size++;
        }
    }
    void deleteAtHead(){
        if(size==0) {
            cout<<"list is empty";
        }
            head = head->next;
            size--;
        
    }
    void deleteAtTail(){
         if(size==0) {
            cout<<"list is empty";
        }
        else{
            Node *temp =head;
            while(temp->next!=tail){
                temp =temp->next;
            }
            temp->next=NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtMiddle(int idx){
        if(size==0) {
            cout<<"list is empty";
        }
        else if(idx<0 || idx>size) cout<<"delete not possible";
        else if(idx==0) deleteAtHead();
        else if(idx==size-1) deleteAtTail();
        else{
            Node *temp  = head;
            for(int i=1;i<=idx-1;i++){
                temp =temp->next;
            }
            temp->next=temp->next->next;
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
void recursive(Node *a){
    if(a==NULL) return ;
    cout<<a->val<<" ";
    recursive(a->next);
}
int main(){
    Linked_List ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtMiddle(80,2);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtMiddle(2);
    ll.display();
}
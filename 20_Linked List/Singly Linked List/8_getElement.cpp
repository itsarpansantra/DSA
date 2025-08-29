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
    ll.display();
    ll.insertAtHead(20);
    ll.insertAtHead(30);
    ll.display();
    ll.insertAtMiddle(3,50);
    ll.display();
    cout<<ll.getvalue(2);
}
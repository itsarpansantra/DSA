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
class linkedList{
    public:
    Node *head;
    Node *tail;
    int size ;
    linkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtHead(int val){
        Node *temp=new Node(val);

        if(size==0) (head=tail=temp);
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }

    void display(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedList ll;
    ll.insertAtHead(20);
    ll.display();
    ll.insertAtHead(10);
    ll.display();
}
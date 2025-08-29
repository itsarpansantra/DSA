// remove all the element present at even position of the queue . consider 0 based index

# include<iostream>
# include<vector>

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
class Queue{// user defiend data structure
    public:
    Node*head;
    Node*tail;
    int s; // size of ll

    Queue(){
        head=tail=NULL; // initially all are empty
        s=0;
    }

    void push(int val){
        Node *temp = new Node(val); // create a new node
        if(s==0) (head=tail=temp);
        else{
            tail->next=temp;
            tail=temp;
        }
        s++;
    }
    void pop(){ // delete at first node 
        Node *temp =head;
        if(s==0) {
            cout<<" Queue is empty ";
            return ;
        }
        head=head->next; // we lost access head node
        s--;
        delete(temp); // jeta pop korchi taka ll thaka udia dichhi
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
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    Queue q; 
    q.push(10);
    q.push(20);
    q.push(30);
    q.display();
    q.push(40);
    q.push(50);
    q.display();
    q.pop();
    q.display();
}
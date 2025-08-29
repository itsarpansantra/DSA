# include<iostream>
using namespace std;
class Node{ // user defined data type
    public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{ //user defined datastracture
public:
    Node *head;
    int size;
    Stack(){
        head= NULL;
        size=0;
    }
    void push(int val){ 
       Node *temp = new Node(val);
       temp->next=head;
       head=temp;
       size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty !"<<endl;
            return;
        }
        head = head->next; 
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty !"<<endl;
            return-1;
        }
        return head->val; // give me last element 
    }
    // void display(){ // reverse order print korba ata 
    //     Node *temp =head;
    //     while(temp!=NULL){
    //         cout<<temp->val<<" ";
    //         temp = temp->next;
    //     }
    //     cout<<endl;
    // }
    

    // right ordrer print korbo . karon amader head stack er top connect acha
    void print(Node *temp){
        if(temp==NULL) return ;
        print(temp->next);
        cout<<temp->val<<" " ;
    }
    void display(){
        Node *temp = head;
        print(temp);
        cout<<endl;
    }
};
int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.display();
}
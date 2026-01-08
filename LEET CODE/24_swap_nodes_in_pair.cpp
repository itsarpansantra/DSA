/*
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

 

Example 1:

Input: head = [1,2,3,4]

Output: [2,1,4,3]

Explanation:



Example 2:

Input: head = []

Output: []

Example 3:

Input: head = [1]

Output: [1]

Example 4:

Input: head = [1,2,3]

Output: [2,1,3]
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void inserAtEnd(Node *&head , int val){
    Node *ptr = new Node(val);
    if (head==NULL) { // check linkedlist empty or not
        head = ptr;
        return;
    }

    Node* temp = head;
    while (temp->next!=NULL){
         temp = temp->next; // basically oi lister NULL ager node temp thakba 
    }
       
    temp->next = ptr; // ar oi temper last amar node ta add hoye jaba
    
}
Node*pair_rev(Node*head){
    if(head==NULL|| head->next==NULL) return head;
    Node*prev=NULL;
    Node*curr = head;
    Node*newHead = head->next; 
    while(curr!=NULL && curr->next!=NULL){
        Node*second = curr->next;
        Node*temp = curr->next->next; //for store

        second->next = curr; // reverse done 
        curr->next = temp;
        //update
        if(prev!=NULL) prev->next = second;

        prev = curr;
        curr = temp;
    }
    return newHead;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    inserAtEnd(head1,1);
    inserAtEnd(head1,2);
    inserAtEnd(head1,3);
    inserAtEnd(head1,4);
    display(head1);
    Node*p = pair_rev(head1);
    display(p);
}
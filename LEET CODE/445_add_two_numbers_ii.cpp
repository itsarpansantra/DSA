/*
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [7,2,4,3], l2 = [5,6,4]
Output: [7,8,0,7]
Example 2:

Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [8,0,7]
Example 3:

Input: l1 = [0], l2 = [0]
Output: [0]
*/

# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
   while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* addTwoLists(Node* head1, Node* head2) {
    head1 = reverse(head1);
    head2 = reverse(head2);

    int carry = 0;
    Node* result = NULL;
    Node* tail = NULL;
    while (head1 != NULL || head2 != NULL || carry) {
        int sum = carry;
        if (head1 != NULL) {
            sum += head1->val;
            head1 = head1->next;
        }
        if (head2 != NULL) {
            sum += head2->val;
            head2 = head2->next;
        }
        carry = sum / 10;
        Node* temp = new Node(sum % 10);
        if (result == NULL) {
            result = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    result = reverse(result);
    return result;
}
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
void display(Node *head){
    Node *temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    Node *head2=NULL;

    // first list
    inserAtEnd(head1,10);
    inserAtEnd(head1,20);
    inserAtEnd(head1,30);

    display(head1);
    // second list
    inserAtEnd(head2,20);
    inserAtEnd(head2,30);
    inserAtEnd(head2,40);
    inserAtEnd(head2,60);

    
    display(head2);

    Node *a;
    a= addTwoLists(head1,head2);
    display(a);
}
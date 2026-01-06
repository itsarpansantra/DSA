/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

Example 1:


Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
Example 2:

Input: l1 = [0], l2 = [0]
Output: [0]
Example 3:

Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertAtTail(Node *&head,int val){
    Node*ptr = new Node(val);
    if(head==NULL) {
        head=ptr;
        return;
    }
    Node*t = head;
    while(t->next!=NULL){
        t = t->next;
    }
    t->next =ptr;
}
Node*add(Node*head1,Node*head2){
    Node*result=NULL;
    Node*tail=NULL;
    int carry = 0;
    while(head1!=NULL || head2!=NULL || carry ){
        int sum = carry;
        if(head1!=NULL){
            sum+=head1->val;
            head1 = head1->next;
        }
        if(head2!=NULL){
            sum+=head2->val;
            head2 = head2->next;
        }
        carry = sum/10;
        Node*temp = new Node(sum%10);
        if(result==NULL){
           result= tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }
    return result;
}
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node*head1 = NULL;
    Node*head2 = NULL;
    insertAtTail(head1,2);
    insertAtTail(head1,4);
    insertAtTail(head1,3);

    display(head1);

    insertAtTail(head2,5);
    insertAtTail(head2,6);
    insertAtTail(head2,4);

    display(head2);

    Node*p = add(head1,head2);
    display(p);
}
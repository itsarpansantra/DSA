/*
You are given two linked lists: list1 and list2 of sizes n and m respectively.

Remove list1's nodes from the ath node to the bth node, and put list2 in their place.

The blue edges and nodes in the following figure indicate the result:


Build the result list and return its head.

 

Example 1:


Input: list1 = [10,1,13,6,9,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
Output: [10,1,13,1000000,1000001,1000002,5]
Explanation: We remove the nodes 3 and 4 and put the entire list2 in their place. The blue edges and nodes in the above figure indicate the result.
Example 2:


Input: list1 = [0,1,2,3,4,5,6], a = 2, b = 5, list2 = [1000000,1000001,1000002,1000003,1000004]
Output: [0,1,1000000,1000001,1000002,1000003,1000004,6]
Explanation: The blue edges and nodes in the above figure indicate the result.
*/
// a positon to b position remove element and add list2
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next = NULL;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
void insertNode(Node*&head,int val){
    Node*temp = new Node(val);
  
    if(head==NULL) {
        head = temp;
        return;   
    }
    Node*tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=temp;
}
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
Node*margeNode(Node*head1,Node*head2,int a,int b){
    Node*temp = head1;
    int count =0;
    Node*left = NULL;
    Node*right = NULL;
    while(temp!=NULL){
        if(count==a-1) left =temp;
        if(count==b+1) {
            right = temp;
            break;
        }
        count++;
        temp = temp->next;
    }
    Node*curr = head2;
    while (curr->next!=NULL){
        curr = curr->next;
    }
    if(left==NULL) left = head2;
    else left->next = head2;
    curr->next = right;
    return head1;
}
int main(){
    Node*head1 = NULL;
    insertNode(head1,1);
    insertNode(head1,2);
    insertNode(head1,3);
    insertNode(head1,4);
    insertNode(head1,5);
    insertNode(head1,6);
    insertNode(head1,7);
    insertNode(head1,8);
    display(head1);
    Node*head2 = NULL;
    insertNode(head2,10);
    insertNode(head2,20);
    insertNode(head2,30);
    insertNode(head2,40);
    display(head2);
    Node*p = margeNode(head1,head2,3,5);
    display(p);
}
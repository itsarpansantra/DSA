/*
Given a linked list containing n head nodes where every node in the linked list contains two pointers:
(i) next points to the next node in the list.
(ii) bottom points to a sub-linked list where the current node is the head.
Each of the sub-linked lists nodes and the head nodes are sorted in ascending order based on their data. Flatten the linked list such that all the nodes appear in a single level while maintaining the sorted order.

Note:
1. ↓ represents the bottom pointer and → represents the next pointer.
2. The flattened list will be printed using the bottom pointer instead of the next pointer.

Examples:5->10->19->28->NULL
         |   |   |   |
         7   20  22  40
         |           |
         8           45

Input:

Output: 5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 40 -> 45.
Explanation: 
Bottom pointer of 5 is pointing to 7.
Bottom pointer of 7 is pointing to 8.
Bottom pointer of 10 is pointing to 20 and so on.
So, after flattening the linked list the sorted list will be 
5 -> 7 -> 8 -> 10 -> 19 -> 20 -> 22 -> 28 -> 40 -> 45.
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *next;
    Node *bottom;
    Node(int val){
        this->next = NULL;
        this->bottom = NULL;
        this->val = val;
    }
};
Node *marge(Node *a , Node *b){
    if(a==NULL) return b;
    if(b==NULL) return a;

    Node *result;
    if(a->val < b->val){
        result = a;
        result->bottom = marge(a->bottom,b); // does not next because travell and compare next element to bottom element 
    }
    else{
        result = b;
        result->bottom = marge(a,b->bottom); //this continue recursion and base case hit ho next pointer 
    }
    result->next = NULL; // this is must 
    return result;
}
Node* flatten(Node *head){ 
    if(head==NULL || head->next == NULL) return head; // base case
    head->next = flatten(head->next); // recursion travel 
    head = marge(head,head->next); // marge for sorted list 
    return head;
}
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->bottom; // does not head->next because this is null . all value connect bottom 
    }
}
int main(){
    //connect all node bootom abd next
    Node *head = new Node(5);
    head->bottom = new Node(7);
    head->bottom->bottom = new Node(8);

    head->next = new Node(10);
    head->next->bottom = new Node(20);

    head->next->next = new Node(19);
    head->next->next->bottom = new Node(22);

    head->next->next->next = new Node(28);
    head->next->next->next->bottom = new Node(40);
    head->next->next->next->bottom->bottom = new Node(45);

    Node * p = flatten(head);
    display(p);
}
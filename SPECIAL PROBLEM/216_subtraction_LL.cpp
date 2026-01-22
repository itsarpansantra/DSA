/*
You are given two linked lists representing two large positive numbers. The linked lists represent these two numbers, subtract the smaller number from the larger one and return the head of the linked list representing the result. Please take a look at the examples to get a better understanding of the task.

The linked list does not contain leading zeros, except for the number zero itself.

Examples:

Input: LinkedList1: 1->0->0, LinkedList2: 1->2
Output:  LinkedList: 8->8
Explanation: First linked list represents 100 and the second one represents 12. 12 subtracted from 100 gives us 88 as the result. It is represented as 8->8 in the linked list.

Input: LinkedList1: 6->3, LinkedList2: 7->1->0
Output: LinkedList: 6->4->7
Explanation: First linked list represents 63 and the second one represents 710. 63 subtracted from 710 gives us 647 as the result. It is represented as 6->4->7 in the linked list.

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
Node* rever(Node* head) {
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
bool similar(Node*head1,Node*head2){
    int l1 = 0,l2 =0;
    Node*a = head1;
    Node*b = head2;
    while(a){
        l1++;
        a = a->next;
    }
    while(b){
        l2++;
        b = b->next;
    }
    if(l1!=l2) return l1<l2;
    a = head1;
    b = head2;
    while(a && b){
        if(a->val != b->val) return a->val <b->val;
        a = a->next;
        b = b->next;
    }
    return false;
}
Node*subTwoLists(Node*head1,Node*head2){
    if(!head1) return head2; // head1==NULL so return head2;
    if(!head2) return head1;

    if(similar(head1,head2)) swap(head1,head2); // big element first and smallest element last

    head1 = rever(head1);
    head2 = rever(head2);

    Node*result = NULL;
    Node*tail = NULL;
    int barrow = 0;

    while(head1){
        int a = head1->val-barrow;
        int b ;
        if(head2!=NULL) b= head2->val;
        else b = 0;

        head1 = head1->next;
        if(b>a){ // nicher ta baro ar uporer ta choto
            a+=10;
            barrow=1;
        }
        else{
            barrow=0;
        }
        Node*temp = new Node(a-b);
        if(result==NULL) result = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        if(head2) head2 = head2->next;

       
    }
    result = rever(result);
    while(result &&result->val==0 && result->next ) result = result->next; // ata jodi aga 0 thaka tar jano
    if(result==NULL) return new Node(0);
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
    inserAtEnd(head1,0);
    inserAtEnd(head1,0);
    inserAtEnd(head1,6);
    inserAtEnd(head1,3);
    display(head1);
    // second list
    inserAtEnd(head2,7);
    inserAtEnd(head2,1);
    inserAtEnd(head2,0);

    
    display(head2);

    Node *a;
    a= subTwoLists(head1,head2);
    display(a);
}

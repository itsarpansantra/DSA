/*
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

Example 1:


Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
Example 2:


Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]


*/
//reverse group wise and if few node left less than k connect as it is 
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
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node*reverse_nodes(Node*head,int k){
    if(head==NULL || k==0) return head;
    Node *curr = head;
    Node*prevGoupTail = NULL;
    Node*newHead = NULL;
    while(curr!=NULL){
        int count =0;
        Node*check = curr;
        while(check!=NULL && count<k){ // this is for traverse and find how mush node are reverse 
            check = check->next;
            count++;
        }
        if(count<k){ // last few element left connect with currect node
            if(prevGoupTail!=NULL) prevGoupTail->next = curr;
            break;
        }
        // now reverse k group node
        Node*prev = NULL;
        Node*tempCurr = curr;
        for(int i=0;i<k;i++){
            Node*newNode = tempCurr->next;
            tempCurr->next = prev;
            prev = tempCurr;
            tempCurr= newNode;
        }
        if(newHead==NULL) newHead = prev; // for first group reverse node connect
        if(prevGoupTail!=NULL) prevGoupTail->next = prev; // another group reverse then connect 

        prevGoupTail = curr; // updation for connection
        curr = tempCurr;
    }
    if(newHead!=NULL) return newHead;
    else return head;
}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    Node*f = new Node(60);
    Node*g = new Node(70);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    display(a);
    int k =3;
    Node*p =reverse_nodes(a,k);
    display(p);
}
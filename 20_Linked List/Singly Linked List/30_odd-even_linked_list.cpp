/*
Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

The first node is considered odd, and the second node is even, and so on.

Note that the relative order inside both the even and odd groups should remain as it was in the input.

You must solve the problem in O(1) extra space complexity and O(n) time complexity.

Input: head = [1,2,3,4,5]
Output: [1,3,5,2,4]

*/
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node *random;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->random=NULL;
    }
};
Node *odd_even(Node *head){
    Node *a=new Node(100);
    Node *b = new Node(200);
    Node *tempa =a;
    Node*tempb =b;
    Node *temp = head;
    int idx =1;
    while(temp!=NULL){
        if(idx%2!=0){
            tempa->next=temp;
            tempa=tempa->next;
        }
        else{
            tempb->next=temp;
            tempb=tempb->next;
        }

        temp = temp->next;
        idx++;
    }
    tempa->next=b->next;
    tempb->next=NULL;
    return a->next;

}
void display(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(4);
    Node*e = new Node(5);


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    Node *p =odd_even(a);
    display(p);

}
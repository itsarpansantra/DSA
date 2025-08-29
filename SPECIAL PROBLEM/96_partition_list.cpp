/*
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Input: head = [1,4,3,2,5,2], k = 3
Output: [1,2,2,4,3,5]
*/
#include<iostream>
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
Node*partiton(Node *head , int k){
    Node *low = new Node(100); // ata akta farzi node . atay add hoba k ar thaka choto value
    Node *tempLow =low;
    Node *high = new Node(200); // ata ar akta farzi node . atay add hoba k r thaka baro valu
    Node *tempHigh =high;

    Node *temp = head; // ai ta main list ata pointer rhakbo traverse korba 

    while(temp!=NULL){ // traverse korta korta jatokhan null asa
        if(temp->val<k){ // check for less than k 
            tempLow->next=temp;
            temp = temp->next;
            tempLow=tempLow->next;
        }
        else{ // check for greater than equal to k
            tempHigh->next=temp;
            temp = temp->next;
            tempHigh=tempHigh->next;
        }
    }

    tempLow->next = high->next; // choto der ja list thakba taar last node er satha baro der list first node ta k connect kore debo
    tempHigh->next=NULL;// ar last node ta k null point korea debo
    return low->next; // low ta to farzi node acha . taii tar parer ta return kore dilam 
}
int main(){
    Node*a = new Node(10);
    Node*b = new Node(80);
    Node*c = new Node(40);
    Node*d = new Node(30);
    Node*e = new Node(60);
    Node*f = new Node(70);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    int k;
    cout<<"Enter K for partition : ";
    cin>>k;
    display(a);
    Node*p =partiton(a,k);
    display(p);
}
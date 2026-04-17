/*
You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

Return the head of the modified linked list.

 

Example 1:


Input: head = [0,3,1,0,4,5,2,0]
Output: [4,11]
Explanation: 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 3 + 1 = 4.
- The sum of the nodes marked in red: 4 + 5 + 2 = 11.
Example 2:


Input: head = [0,1,0,3,0,2,2,0]
Output: [1,3,4]
Explanation: 
The above figure represents the given linked list. The modified list contains
- The sum of the nodes marked in green: 1 = 1.
- The sum of the nodes marked in red: 3 = 3.
- The sum of the nodes marked in yellow: 2 + 2 = 4.
*/
// mana 0 r vitor data add kore ar akta linked list bania return korbo
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
Node*marge_node(Node*head){
    Node*temp = new Node(100);
    Node*tail = temp;
    head = head->next; // because first node is 0
    int sum =0;
    while(head!=NULL){
        if(head->val==0){
            Node*p = new Node(sum); // creata a node
            tail->next = p; // connect farzi node 
            tail=p;
            sum=0; // again sum 0 
        }
        else{
            sum+=head->val; // count b/w 0 element
        }
        head = head->next;
    }
    return temp->next;
}
int main(){
    Node*a = new Node(0);
    Node*b = new Node(3);
    Node*c = new Node(1);
    Node*d = new Node(0);
    Node*e = new Node(4);
    Node*f = new Node(5);
    Node*g = new Node(2);
    Node*h = new Node(0);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;


    display(a);
    Node*p = marge_node(a);
    display(p);
}
/*
Input: head = [1,2,3,4]
Output: [1,4,2,3]
*/
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
Node *reverse(Node *head){
    Node *current =head;
    Node *previous = NULL;
    Node *Next =NULL;

    while(current!=NULL){
        Next = current->next;
        current->next=previous;
        previous = current;
        current=Next;
    }
    return previous;
}
Node*reorder(Node *head){
    Node*slow =head;
    Node*fast =head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow =slow->next;
            fast = fast->next->next;
        }
    Node *b = reverse(slow->next);
    Node *a = head;
    slow->next =NULL; // for break the list

    //merge a and b alternetively

    
        Node *c =new Node(100);
        Node *tempC =c;
        Node *tempA =a;
        Node *tempB =b;

        while(tempA && tempB){
            tempC->next =tempA;
            tempC = tempC->next;
            tempA = tempA->next;

            tempC->next =tempB;
            tempC = tempC->next;
            tempB = tempB->next;

        }

        tempC->next = tempA;
        head= c->next;


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
    Node*a = new Node(10);
    Node*b = new Node(20);
    Node*c = new Node(30);
    Node*d = new Node(40);
    Node*e = new Node(50);
    Node*f = new Node(60);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;

    display(a);
    Node*p =reorder(a);
    display(p);
}
/*
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
Input: head = [1,2,2,1]
Output: true
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
bool palindrome(Node *head){
    Node *slow = head;
    Node *fast = head;
    // we want left middle
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast= fast->next->next;
    }
    // slow is left middle or middle

    Node *newHead = reverse(slow->next); // ata slow pare ja acha seta reverse kore nia asba 
   // abar 2 to pointer banabo dia check korbo 2 to equal ke na 
    Node *a = head;
    Node *b =newHead;
    while(b!=NULL){
        if(a->val!=b->val) return false;
        a = a->next;
        b = b->next;
    }
    return true;



    // second method


    // Node *c = new Node(100); // farzi node
    // // deep copy 
    // Node *tempc = c;
    // Node *temp =head;

    // while(temp!=NULL){ // original list 
    //     Node *node = new Node(temp->val); // all time create a new node 
    //     tempc ->next=node; // oi node er satha tempc ja baniachi seta add kore jabo 
    //     temp = temp->next;
    //     tempc = tempc->next;
    // }

    // c= c->next; // farzi node ta thaka disconnect hoye galo 
    // // c amar akta new list creat hoye galo 
    // // abar c k reverse kore nia asbo
    // c= reverse(c);

    // // then create 2 node for traverse two node 

    // Node *a = head;
    // Node *b =c;

    // while(a!=NULL){ // basically je kono akta likhla hato . karon 2to r size same
    //     if(a->val!=b->val) return false;
    //     a = a->next;
    //     b = b->next;
    // }
    // return true;
} 
int main(){
    Node*a = new Node(1);
    Node*b = new Node(2);
    Node*c = new Node(3);
    Node*d = new Node(2);
    Node*e = new Node(1);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    cout<<palindrome(a);
    
}
//Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
// two ll thakba tader intersection bar korta hoba 
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
Node* intersection(Node *headA , Node*headB){
    Node*tempA = headA;
    Node*tempB = headB;
    int lenA = 0;
    while(tempA!=NULL){
        lenA++;
        tempA=tempA->next;
    }

    int lenB = 0;
    while(tempB!=NULL){
        lenB++;
        tempB=tempB->next;
    }

    // 2 temp k again head nia asbo

    tempA=headA;
    tempB= headB;
    if(lenA>lenB){
        int diff = (lenA-lenB); // calculate length 
        for(int i=1;i<=diff;i++){ // jodi first ll r length baro hoy . to tempA k tatota agia debo . equal length r janno
            tempA=tempA->next;
        }
        while(tempA!=tempB){ // jato khan equal hoy check korbo ami . basically check equal address . na milla NULL return hoba
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA; // jakono akta 2 to same 
    }
    else{ // lena<=lenB
        int diff = (lenB-lenA);
        for(int i=1;i<=diff;i++){
             tempB=tempB->next;
        }
        while(tempA!=tempB){
            tempA=tempA->next;
            tempB=tempB->next;
        }
        return tempA;
    }

}
int main(){
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);
    a->next =b;
    b->next =c;
    c->next =d;
    d->next =e;
    e->next = f;

  
    Node *g = new Node(20);
    Node *h = new Node(10);
    Node *i = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    Node *f = new Node(60);

    g->next =h;
    h->next =i;
    i->next =d;

    Node *ptr = a; // head of first ll
    Node *ptr1 = b; // head of second ll

    cout<<intersection(a,b);
    //cout<<a->val<<endl;
}
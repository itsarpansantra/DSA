# include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next = NULL;
    }

};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next =&b;
    b.next =&c;
    c.next =&d;

    Node temp =a;
    // while(temp.next!=NULL){ // ai ta korla 40 print hoba na 
    //     cout<<temp.val<<" ";
    //     temp = *(temp.next);
    // }

    while(1){ // infinite loop
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp = *(temp.next);
    } 
}

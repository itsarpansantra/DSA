/*
You are given the head of a linked list.

The nodes in the linked list are sequentially assigned to non-empty groups whose lengths form the sequence of the natural numbers (1, 2, 3, 4, ...). The length of a group is the number of nodes assigned to it. In other words,

The 1st node is assigned to the first group.
The 2nd and the 3rd nodes are assigned to the second group.
The 4th, 5th, and 6th nodes are assigned to the third group, and so on.
Note that the length of the last group may be less than or equal to 1 + the length of the second to last group.

Reverse the nodes in each group with an even length, and return the head of the modified linked list.

Input: head = [5,2,6,3,9,1,7,3,8,4]
Output: [5,6,2,3,9,1,4,8,3,7]
Explanation:
- The length of the first group is 1, which is odd, hence no reversal occurs.
- The length of the second group is 2, which is even, hence the nodes are reversed.
- The length of the third group is 3, which is odd, hence no reversal occurs.
- The length of the last group is 4, which is even, hence the nodes are reversed.

Input: head = [1,1,0,6,5]
Output: [1,0,1,5,6]
Explanation:
- The length of the first group is 1. No reversal occurs.
- The length of the second group is 2. The nodes are reversed.
- The length of the last group is 2. The nodes are reversed.

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
    Node *prev=NULL;
    Node *Next =NULL;
    Node *curr=head;
    while(curr){
        Next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
Node *reverse_between(Node *head ,int left , int right){
    Node *a=NULL;
    Node *b=NULL;
    Node *c=NULL;
    Node *d=NULL;
    int count =1;
    Node *temp=head;
    while(temp){
        if(count==left-1) a=temp;
        if(count==left) b =temp;
        if(count==right) c= temp;
        if(count==right+1) d = temp;
        temp= temp->next;
        count++;
    }
    a->next=NULL;
    if(c!=NULL)c->next=NULL; 
    reverse(b);
    a->next=c;
    b->next=d;
    return head;
}
Node *reverse_node(Node *head){
    int gap =1;//calculate diffeence between left and right
    Node *temp =head;
    while(temp!=NULL && temp->next!=NULL){ // puro ll travel korba
        int remLength=0; // remaining length
        Node *t = temp->next;
        for(int i=1;i<=gap+1 && t!=NULL;i++){
            t= t->next;
            remLength++;
        }
        if(remLength<gap+1) gap = remLength-1;
        if(gap%2!=0) reverse_between(temp,2,2+gap); // je samsta group gap odd hoba sudhu sagulo reverse hoba
        gap++; // dia gap k baria debo
        for(int i=1;temp!=NULL && i<=gap;i++){// jato gap hoba tatodur temp ta agia debo
            temp = temp->next; // upore je temp!=NULL korlam tar karon group 4  4 ta element asar kotha jodi 3 ta asa takhn ata check kore
        }
    }
    return head; 
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
    Node*a = new Node(5);
    Node*b = new Node(2);
    Node*c = new Node(6);
    Node*d = new Node(3);
    Node*e = new Node(9);
    Node*f = new Node(1);
    Node*g = new Node(7);
    Node*h = new Node(3);
    Node*i = new Node(8);
    //Node*j = new Node(100);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    //i->next=j;

    display(a);
    // v =critical_path(a);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" "; 
    // }
    Node *p =reverse_node(a);

    display(p);
}
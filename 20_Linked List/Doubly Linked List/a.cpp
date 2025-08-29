# include<iostream>
# include<vector>
# include<climits>
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
    Node *Next = NULL;
    Node *prev = NULL;
    Node *curr = head;
    while(curr){
        Next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=Next;
    }
    return prev;
}
Node *reverse_between(Node *head,int left,int right){
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
    c->next=NULL;
    reverse(b);
    a->next=c;
    b->next=d;
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
    vector<int>v;
    Node*a = new Node(5);
    Node*b = new Node(3);
    Node*c = new Node(1);
    Node*d = new Node(2);
    Node*e = new Node(50);
    Node*f = new Node(10);
    Node*g = new Node(20);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;

    display(a);
    // v =critical_path(a);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" "; 
    // }
    Node *p =reverse_between(a,2,5);

    display(p);
}
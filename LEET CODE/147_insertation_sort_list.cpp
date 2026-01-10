# include<iostream>
using namespace std;
class Node{
public:
    Node*next;
    int val;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
Node*insertation(Node*head){
    if(head==NULL||head->next==NULL) return head;
    Node*temp = new Node(100); // creat a dummy node
    Node*curr=head;
    while(curr!=NULL){
        Node*nn = curr->next; // nn means next node storing
        Node*prev = temp;// always contain  the prev for comapreing
        while(prev->next!=NULL && prev->next->val<curr->val){ // find where insert the element
            prev = prev->next; 
        }
        curr->next = prev->next;
        prev->next = curr;
        curr = nn;
    }
    return temp->next;
}
void display(Node*head){
    Node*temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node*x = new Node(4);
    Node*y = new Node(2);
    Node*z = new Node(1);
    Node*m = new Node(3);
    x->next = y;
    y->next = z;
    z->next = m;
    display(x);
    Node*p = insertation(x);
    display(p);
}


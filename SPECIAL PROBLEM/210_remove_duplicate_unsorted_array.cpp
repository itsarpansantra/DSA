/*

*/
# include<iostream>
# include<unordered_set>
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
Node *removeDuplicates(Node *head) {
    if (head == NULL) return head;
    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;
    while (curr != NULL) {
        if (seen.find(curr->val) != seen.end()) {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        } else {
        seen.insert(curr->val);
            prev = curr;
            curr = curr->next;
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
    Node*a = new Node(1);
    Node*b = new Node(1);
    Node*c = new Node(2);
    Node*d = new Node(3);
    Node*e = new Node(3);

    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    display(a);
    removeDuplicates(a);
    display(a);
}
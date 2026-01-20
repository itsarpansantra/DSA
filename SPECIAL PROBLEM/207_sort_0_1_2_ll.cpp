/*

*/
# include<iostream>
# include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void inserAtEnd(Node *&head , int val){
    Node *ptr = new Node(val);
    if (head==NULL) { // check linkedlist empty or not
        head = ptr;
        return;
    }

    Node* temp = head;
    while (temp->next!=NULL){
         temp = temp->next; // basically oi lister NULL ager node temp thakba 
    }
       
    temp->next = ptr; // ar oi temper last amar node ta add hoye jaba
    
}
Node*sort012(Node*head){
    if(head==NULL||head->next==NULL) return head;
    int cnz = 0,cno = 0, cnt =0;
    Node*temp = head;
    while(temp!=NULL){
        if(temp->val==0)cnz++;
        else if(temp->val==1) cno++;
        else cnt++;
        temp = temp->next;
    }
    temp = head;
    while(cnz--){
        temp->val = 0;
        temp = temp->next;
    }
    while(cno--){
        temp->val=1;
        temp = temp->next;
    }
    while(cnt--){
        temp->val=2;
        temp = temp->next;
    }
    return head;
}
void display(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    inserAtEnd(head1,1);
    inserAtEnd(head1,0);
    inserAtEnd(head1,2);
    inserAtEnd(head1,1);
    inserAtEnd(head1,0);
    inserAtEnd(head1,1);
    inserAtEnd(head1,2);
    inserAtEnd(head1,2);
    inserAtEnd(head1,0);
    inserAtEnd(head1,0);
    inserAtEnd(head1,1);
    display(head1);
    Node*p = sort012(head1);
    display(p);
}
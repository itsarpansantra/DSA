/*
Given a singly linked list containing nodes with English alphabets ('a'-'z'). Rearrange the linked list in such a way that all the vowels come before the consonants while maintaining the order of their arrival. 

Examples:

Input: Linked list: a -> b -> c -> d -> e -> f -> g -> h -> i 
Output: a -> e -> i -> b -> c -> d -> f -> g -> h

Explanation: After rearranging the input linked list according to the condition the resultant linked list will be as shown in output.
Input: Linked list: a -> b -> a -> b -> d -> e -> e -> d 
Output: a -> a -> e -> e -> b -> b -> d -> d

Explanation: After rearranging the input linked list according to the condition the resultant linked list will be as shown in output.
*/
# include<iostream>
using namespace std;
class Node{
public:
    char val;
    Node*next;
    Node(char val){
        this->val = val;
        this->next = NULL;
    }
};
bool isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}
Node*arrange(Node*head){
    if(head==NULL) return NULL;
    Node*temp = head;
    Node*x = new Node('#');
    Node*tempa = x;
    Node*y = new Node('#');
    Node*tempb = y;
    while(temp!=NULL){
        Node* nextNode = temp->next; // save next
        temp->next = NULL;  
        if(isVowel(temp->val)){
            tempa->next = temp;
            tempa = temp;
        }
        else{
            tempb->next = temp;
            tempb = temp;
        }
        temp = nextNode;
    }
    tempa->next = y->next;
    return x->next;
}
void insertAtEnd(Node* &head,char val){
    Node*temp = new Node(val);
    if(head==NULL){
        head= temp;
        return;
    }
    Node*t = head;
    while(t->next!=NULL){
        t = t->next;
    }
    t->next = temp;
}
void display(Node*head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node*head1 = NULL;
    insertAtEnd(head1,'a');
    insertAtEnd(head1,'b');
    insertAtEnd(head1,'c');
    insertAtEnd(head1,'d');
    insertAtEnd(head1,'e');
    insertAtEnd(head1,'f');
    insertAtEnd(head1,'g');
    insertAtEnd(head1,'h');
    insertAtEnd(head1,'i');

    display(head1);

    Node*z = arrange(head1);
    display(z);
}
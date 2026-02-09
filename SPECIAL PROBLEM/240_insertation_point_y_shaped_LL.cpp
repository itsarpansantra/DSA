/*
Given two singly linked lists, write a program to get the point where two linked lists intersect each other. If the linked list does not merge at any point, it should return NULL.

Examples:

Input: LinkedList1: 3->6->9->common, LinkedList2: 10->common, common: 15->30->NULL
Output: 15
Explanation:
 
Input: LinkedList1: 4->1->common, LinkedList2: 5->6->1->common, common: 8->4->5->NULL
Output: 8
Explanation: 
  
Expected Time Complexity: O(n+m)
*/

// question say the what is the miting point
# include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertAtEnd(Node*&head,int val){
    Node*ptr = new Node(val);
    if(head==NULL){
        head = ptr;
        return;
    }
    Node*temp=head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = ptr;
}
Node* getTail(Node* head){
    while(head->next) head = head->next;
    return head;
}
int length(Node*head){// calculate list length
    int len =0;
    while(head){
        len++;
        head = head->next;
    }
    return len;
}
int insert(Node*head1 , Node*head2){
    int len1 = length(head1);
    int len2 = length(head2);
    int diff = abs(len1-len2);

    if(len1>len2){ // how many difference upgrade head
        while(diff--){
            head1 = head1->next;
        }
    }
    else{
        while(diff--){
            head2 = head2->next;
        }
    }

    while(head1 && head2){
        if(head1==head2) return head1->val; // both are match so return
        head1 = head1->next;
        head2 = head2->next;
    }
    return 0;
}
int main(){
    Node* head1 = NULL;
    insertAtEnd(head1, 1);
    insertAtEnd(head1, 2);
    insertAtEnd(head1, 3);
    insertAtEnd(head1, 4);
    insertAtEnd(head1, 5);

    Node* head2 = NULL;
    insertAtEnd(head2, 9);
    insertAtEnd(head2, 10);

    // COMMON PART
    Node* common = NULL;
    insertAtEnd(common, 100);
    insertAtEnd(common, 200);
    insertAtEnd(common, 300);

    // CONNECT both lists to common
    getTail(head1)->next = common;
    getTail(head2)->next = common;

    cout << insert(head1, head2);
}

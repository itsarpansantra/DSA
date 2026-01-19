/*
You are given the head of two singly linked lists head1 and head2 representing two non-negative integers. You have to return the head of the linked list representing the sum of these two numbers.

Note: There can be leading zeros in the input lists, but there should not be any leading zeros in the output list.

Examples:

Input: 
    list 1: 1 , 2, 3
    list 2: 9, 9, 9
    sum: 123+999 = 1122

Output:  1 -> 1 -> 2 -> 2
Explanation: Given numbers are 123 and 999. There sum is 1122.
    
Input: 
    list 1: 0,0,6,3
    list 2: 0,7
    sum: 0063+07 = 70
Output: 7 -> 0 
Explanation: Given numbers are 63 and 7. There sum is 70.
    
*/
//my approach . fails large input


# include<iostream>
using namespace std;


// class Solution {
//   public:
//     class LinkedList{
//       public:
//       Node *head;
//       Node *tail;
//       int size;
//       LinkedList(){
//           head=tail=NULL;
//           size=0;
//       }
//       void insertAtBegin(int val){
          
//           Node *temp = new Node (val);
//           if(size==0) head= tail=temp;
//           else{
//               temp->next = head;
//               head= temp;
//           }
//           size++;
//       }
//     };
//     Node *add(int sum){
//         if(sum == 0) return new Node(0);
//         int n = sum;
//         LinkedList ll;
//         while(n!=0){
//             int rem = n%10;
//             ll.insertAtBegin(rem);
//             n/=10;
//         }
//         return ll.head;
//     }
//     Node* addTwoLists(Node* head1, Node* head2) {
//         // code here
//         int sum1=0,sum2=0;
//         Node *temp1 = head1;
//         Node *temp2 = head2;
//         while(temp1!=NULL){
//             sum1 = sum1*10+temp1->val;
//             temp1= temp1->next;
//         }
//         while(temp2!=NULL){
//            sum2 = sum2*10+temp2->val;
//            temp2= temp2->next; 
//         }
//         int sum = sum1+sum2;
//         Node *p = add(sum);
//         return p;
//     }
// };
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next= NULL;
    }
};
Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
   while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
Node* removeLeadingZeros(Node* head) {
    while (head != NULL && head->val == 0 && head->next != NULL) {
        head = head->next;
    }
    return head;
}
Node* addTwoLists(Node* head1, Node* head2) {
    head1 = reverse(head1);
    head2 = reverse(head2);

    int carry = 0;
    Node* result = NULL;
    Node* tail = NULL;
    while (head1 != NULL || head2 != NULL || carry) {
        int sum = carry;
        if (head1 != NULL) {
            sum += head1->val;
            head1 = head1->next;
        }
        if (head2 != NULL) {
            sum += head2->val;
            head2 = head2->next;
        }
        carry = sum / 10;
        Node* temp = new Node(sum % 10);
        if (result == NULL) {
            result = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
    }
    result = reverse(result);
    result = removeLeadingZeros(result);
    return result;
}
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
void display(Node *head){
    Node *temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node *head1=NULL;
    Node *head2=NULL;

    // first list
    inserAtEnd(head1,10);
    inserAtEnd(head1,20);
    inserAtEnd(head1,30);

    display(head1);
    // second list
    inserAtEnd(head2,20);
    inserAtEnd(head2,30);
    inserAtEnd(head2,40);
    inserAtEnd(head2,60);

    
    display(head2);

    Node *a;
    a= addTwoLists(head1,head2);
    display(a);
}

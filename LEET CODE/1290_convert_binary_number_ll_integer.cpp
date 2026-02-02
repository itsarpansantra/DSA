/*
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

The most significant bit is at the head of the linked list.

 

Example 1:


Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
Example 2:

Input: head = [0]
Output: 0
 
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
void display(Node *head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
int binary_decimal(string &s){
    int n = s.size();
    int sum =0;
    int x =1;
    for(int i=n-1;i>=0;i--){
        int num = s[i]-'0';
        sum += num*x;
        x*=2; 
    }
    return sum;
}
int binary_decimal_ll(Node*head){
    if(head==NULL) return 0;
    string s="";
    while(head){
        s+=char(head->val+'0');
        head = head->next;
    }
    return binary_decimal(s);
}
int main(){
    Node *a = new Node(1);
    Node *b = new Node(0);
    Node *c = new Node(1);

    a->next =b;
    b->next =c;

    display(a);

    cout<<binary_decimal_ll(a);
}
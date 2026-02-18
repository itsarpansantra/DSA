/*
Given two polynomial numbers represented by a linked list. The task is to add these lists meaning the coefficients with the same variable powers.
Note:  Given polynomials are sorted in decreasing order of power.

Examples:

Input: LinkedList1: x2, LinkedList2: x3
Output: x3 + x2
Explanation: Since, x2 and x3 both have different powers as 2 and 3. So, their coefficient can't be added up.
Input: LinkedList1:  x3 -> 2x2, LinkedList2:  3x3 -> 4x2
Output: 4x3 -> 6x2
Explanation: Since, x3 has two different coefficients as 3 and 1. Adding them up will lead to 4x3. Also, x2 has two coefficients as 4 and 2. So, adding them up will give 6x2.
*/
# include<iostream>
using namespace std;
class Node{
    public:
    int coeff;
    int pow;
    Node*next;
    Node(int c,int p){
        this->coeff=c;
        this->pow = p;
        this->next =NULL;
    }
};
Node*addPolinomial(Node*head1,Node*head2){
    Node*temp = new Node(0,0); // coeficient and power
    Node*tail = temp;
    while(head1,head2){
        if(head1->pow==head2->pow){
            int sum = head1->coeff+head2->coeff;
            if(sum>0){
                tail->next = new Node(sum,head1->pow);
                tail = tail->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        else if(head1->pow > head2->pow){
            tail->next = new Node(head1->coeff,head1->pow);
            tail = tail->next;
            head1 = head1->next;
        }
        else{
            tail->next = new Node(head2->coeff,head2->pow);
            tail = tail->next;
            head2 = head2->next;
        }
    }
    while(head1){
        tail->next = new Node(head1->coeff,head1->pow);
        tail = tail->next;
        head1 = head1->next;
    }
    while(head2){
        tail->next = new Node(head2->coeff,head2->pow);
        tail = tail->next;
        head2 = head2->next;
    }
    return temp->next;
}
void display(Node *head){
    while(head){
        cout<<head->coeff<<"X^"<<head->pow;
        if(head->next!=NULL) cout<<"+";
        head = head->next;
    }
    cout<<endl;
}
int main(){
    Node*head1 = new Node(1,3);
    head1->next = new Node(2,2);

    Node*head2 = new Node(3,3);
    head2->next = new Node(4,2);

    Node*result = addPolinomial(head1,head2);
    display(result);
}
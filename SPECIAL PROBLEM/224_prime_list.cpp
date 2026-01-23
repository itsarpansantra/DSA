/*
You are given the head of a linked list. You have to replace all the values of the nodes with the nearest prime number. If more than one prime number exists at an equal distance, choose the smallest one. Return the head of the modified linked list.

Examples :

Input: head = 2 → 6 → 10
Output: 2 → 5 → 11

Explanation: The nearest prime of 2 is 2 itself. The nearest primes of 6 are 5 and 7, since 5 is smaller so, 5 will be chosen. The nearest prime of 10 is 11.
Input: head = 1 → 15 → 20
Output: 2 → 13 → 19

Explanation: The nearest prime of 1 is 2. The nearest primes of 15 are 13 and 17, since 13 is smaller so, 13 will be chosen. The nearest prime of 20 is 19.
*/
# include<iostream>
# include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->next = NULL;
        this->val = val;
    }
};
bool isprime(int x){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int right (int x){
    if(isprime(x)) return x;
    int left = x-1;
    int right = x+1;
    while(true){
        if(left>=2 && isprime(left)) return left;
        if(isprime(right)) return right;
        left++;
        right--;
    }
}
Node*prime(Node*head){
    Node*curr = head;
    while(curr){
        curr->val =  right(curr->val);
        curr = curr->next;
    }
    return curr;
}
void display(Node*head){
    Node*temp = head;
    while(temp){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node*a = new Node(1);
    Node*b = new Node(15);
    Node*c = new Node(20);
    a->next = b;
    b->next = c;
    display(a);
    Node*p = prime(a);
    display(b);
}
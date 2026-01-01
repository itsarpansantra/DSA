/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

 

Example 1:


Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Example 2:

Input: head = [], val = 1
Output: []
Example 3:

Input: head = [7,7,7,7], val = 7
Output: []
*/
#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

Node* remove(Node* head, int val) {
    // Case 1: Empty list
    if (head == NULL) return NULL;

    // Case 2: Remove matching nodes from the beginning
    while (head != NULL && head->val == val) {
        head = head->next;
    }

    // If list becomes empty
    if (head == NULL) return NULL;

    Node* prev = head;
    Node* curr = head->next;

    // Case 3: Remove matching nodes in remaining list
    while (curr != NULL) {
        if (curr->val == val) {
            prev->next = curr->next;
            curr = curr->next;   // do NOT move prev
        } else {
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}

void display(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(6);
    Node* d = new Node(3);
    Node* e = new Node(4);
    Node* f = new Node(6);
    Node* g = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;

    display(a);
    a = remove(a, 6);
    display(a);
}
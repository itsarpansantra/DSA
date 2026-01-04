/*
Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the MyLinkedList class:

MyLinkedList() Initializes the MyLinkedList object.
int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
void addAtTail(int val) Append a node of value val as the last element of the linked list.
void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.
 

Example 1:

Input
["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3]

Explanation
MyLinkedList myLinkedList = new MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3
*/
# include<iostream>
using namespace std;
struct Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class MyLinkedList{
    public:
    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = tail = NULL;
        size = 0;
    }
    
    int get(int idx) {
        if(idx<0 || idx>=size){
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node *temp = head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;

            }
            return temp->val;
        }
    }
    
    void addAtHead(int val) {
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node *temp = new Node(val);
        if(size==0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;   
    }
    
    void addAtIndex(int index, int val) {
        if(index<0 || index>size) return ;
        else if(index==0) addAtHead(val);
        else if(index==size) addAtTail(val);
        else{
            Node *t = new Node(val);
            Node *temp = head;
            for(int i=1;i<=index-1;i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;

        if (index == 0) {
            Node* del = head;
            head = head->next;
            delete del;
            if (size == 1) tail = NULL;
        } else {
            Node *temp = head;
            for (int i = 1; i <= index - 1; i++) {
                temp = temp->next;
            }
            Node* del = temp->next;
            temp->next = del->next;
            if (del == tail) tail = temp;
            delete del;
        }
        size--;
    }
};
int main(){
    MyLinkedList myLinkedList ;
    myLinkedList.addAtHead(1);
    myLinkedList.addAtTail(3);
    myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
    myLinkedList.get(1);              // return 2
    myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
    myLinkedList.get(1);  
}
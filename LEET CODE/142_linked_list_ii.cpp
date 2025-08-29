/*
Given the head of a linked list, return the node where the cycle begins. If there is no cycle, return null.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to (0-indexed). It is -1 if there is no cycle. Note that pos is not passed as a parameter.


*/
// basically cycle return korta hoba 
# include<iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow= head;
        ListNode *fast = head;
        bool flag =false; // denote no cycle
        while(fast!=NULL && fast->next!= NULL){
            slow =slow->next;
            fast = fast->next->next;
            if(slow==fast) { // identify cycle has ocured
                flag = true;
                break;
            }
        }
        if(flag==false) return NULL;
        else{
            ListNode *temp =head; // this temp node jata heada thakba 
            while(temp!=slow){ // abar jakhana temp ar slow ak jaygay chola asba say khan thaka amar cycle suru
                 slow =slow->next; 
                 temp= temp->next;
            }
            return slow;
        }
    }
};
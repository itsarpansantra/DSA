/*
You are given a doubly linked list, which contains nodes that have a next pointer, a previous pointer, and an additional child pointer.
 This child pointer may or may not point to a separate doubly linked list, also containing these special nodes.
 These child lists may have one or more children of their own, and so on, to produce a multilevel data structure as shown in the example below.

Given the head of the first level of the list, flatten the list so that all the nodes appear in a single-level, doubly linked list. Let curr be a node with a child list. 
The nodes in the child list should appear after curr and before curr.next in the flattened list.

Return the head of the flattened list. The nodes in the list must have all of their child pointers set to null.

 
*/
# include<iostream>
using namespace std;
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};


class Solution {
public:
    Node* flatten(Node* head) {
        Node *temp = head; // first ja list acha tar heaad point korbo
        while(temp){ // 
            Node *a = temp->next; // jai node thaka child node bariacha tar parer node
            if(temp->child!=NULL){ //sab node r to child value thaka na . jai node er child acha seta sudhu
                Node *c =temp->child;// first child akta pointer lagalam
                temp->child = NULL; // 
                c=flatten(c); // recursion . we assume oi node r ar kono child thaka e gulo akta list chola asba
                temp->next =c; // temp r satha chid c pointer  er connection korlam 
                c->prev =temp; // 
                while(c->next){ // c child list er last obdi nia giachilam
                    c=c->next;
                }
                c->next =a; // c k main lister satha connect kore dilam
                if(a!=NULL)a->prev=c;

            }
            temp =a; // jodi main list aro kono child thak a tar janno
        }
        return head;
    }
};
/*
You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6

mana anek list thakba tader head gulo akta vector push kora . seta vector ta k sort korta hoba

*/

# include<iostream>
# include<vector>
using namespace std;

  struct ListNode {
     int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* merge(ListNode*a , ListNode*b){ // normal merge two element
        ListNode*c = new ListNode(100);
        ListNode*temp = c;
        while(a!=NULL && b!=NULL){
            if(a->val<=b->val){
                temp->next = a;
                a=a->next;
                temp=temp->next;
            }
            else{
                temp->next = b;
                b=b->next;
                temp=temp->next;
            }
        }
        if(a==NULL)  temp->next = b;
        else  temp->next = a;
        return c->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) { // vector of lists
        if(lists.size()==0) return NULL; // if vector has no element
        while(lists.size()>1){ // size jatakhan na 1 hoy
            ListNode *a = lists[0]; // vector er first thaka akta element bar korlam
            lists.erase(lists.begin()); // ai ta halo bar kore system
            ListNode *b = lists[0]; // second element ta k bar korlam
            lists.erase(lists.begin());

            ListNode*c = merge(a,b); // dia oi 2to element k marge korbo 
            lists.push_back(c); // dia abar oi vector push kore debo
        } // ai rakom cholta thakba jatokhan na vector size 1 hoy . last 2 to bar korbo merge korbo dia vector push korbo
        return lists[0];
    }
};



//another processes
// # include<iostream>
// # include<vector>
// using namespace std;

//   struct ListNode {
//      int val;
//     ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode *next) : val(x), next(next) {}
//   };

// class Solution {
// public:
//     ListNode* merge(ListNode*a , ListNode*b){ // normal merge two element
//         ListNode*c = new ListNode(100);
//         ListNode*temp = c;
//         while(a!=NULL && b!=NULL){
//             if(a->val<=b->val){
//                 temp->next = a;
//                 a=a->next;
//                 temp=temp->next;
//             }
//             else{
//                 temp->next = b;
//                 b=b->next;
//                 temp=temp->next;
//             }
//         }
//         if(a==NULL)  temp->next = b;
//         else  temp->next = a;
//         return c->next;
//     }
//     ListNode* mergeKLists(vector<ListNode*>& lists) { // vector of lists
//         if(lists.size()==0) return NULL; // if vector has no element
//         while(lists.size()>1){ // size jatakhan na 1 hoy
//             ListNode *a = lists[lists.size()-1]; // vector er last thaka akta element bar korlam
//             lists.pop_back();
//             ListNode *b = lists[lists.size()-1]; // same tar ager element ta k bar korlam
//             lists.pop_back();

//             ListNode*c = merge(a,b); // dia oi 2to element k marge korbo 
//             lists.push_back(c); // dia abar oi vector push kore debo
//         } // ai rakom cholta thakba jatokhan na vector size 1 hoy . last 2 to bar korbo merge korbo dia vector push korbo
//         return lists[0];
//     }
// };
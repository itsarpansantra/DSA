/*
Input: head = [1,2,3], k = 5
Output: [[1],[2],[3],[],[]]
Explanation:
The first element output[0] has output[0].val = 1, output[0].next = null.
The last element output[4] is null, but its string representation as a ListNode is [].

Input: head = [1,2,3,4,5,6,7,8,9,10], k = 3
Output: [[1,2,3,4],[5,6,7],[8,9,10]]
Explanation:
The input has been split into consecutive parts with size difference at most 1, and earlier parts are a larger size than the later parts.

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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *temp = head; // create a  pointer to traverse the list
        int n = 0; // calculate the size of LL 
        while(temp){ //temp!=NULL
            temp = temp->next;
            n++;
        }
        int size = n/k;// calculate every split linked list size
        int rem  = n%k;// calculate remainder
        vector<ListNode*>ans ; // this a vector we puch the head of every split list

        temp =head; // again we traverse the list
        while(temp!=NULL){
            ListNode *c = new ListNode(100); // create a fake node
            ListNode *tempc = c; // for traverse 

            int s = size;
            if(rem>0){ // remainder greater then zero we add one in s 
                s++;
            }
            rem--;
            for(int i=1;i<=s;i++){ // create a new ll
                tempc->next = temp;
                temp = temp->next;
                tempc= tempc->next;
            }
            tempc->next =NULL; // list created
            ans.push_back(c->next); // c farzi 
        }
        if(ans.size()<k){ // k>n 
            int extra = k-ans.size();// find how many space left in k 
            for(int i=1;i<=extra;i++){
                ans.push_back(NULL); // this position poush NULL
            }
        }
        return ans;
    }
};
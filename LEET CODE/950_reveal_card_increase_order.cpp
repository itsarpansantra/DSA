// akta array thakba . taka aman vaba banabo first element push then second element push in back of queue . ai vaba korta korta array sort hoye jaba 
//arr[]={17,13,11,2,3,5,7};
//o/p 2 13 3 11 5 17 7 

/*
You are given an integer array deck. There is a deck of cards where every card has a unique integer. The integer on the ith card is deck[i].

You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck.

You will do the following steps repeatedly until all cards are revealed:

Take the top card of the deck, reveal it, and take it out of the deck.
If there are still cards in the deck then put the next top card of the deck at the bottom of the deck.
If there are still unrevealed cards, go back to step 1. Otherwise, stop.
Return an ordering of the deck that would reveal the cards in increasing order.

Note that the first entry in the answer is considered to be the top of the deck.

 

Example 1:

Input: deck = [17,13,11,2,3,5,7]
Output: [2,13,3,11,5,17,7]
Explanation: 
We get the deck in the order [17,13,11,2,3,5,7] (this order does not matter), and reorder it.
After reordering, the deck starts as [2,13,3,11,5,17,7], where 2 is the top of the deck.
We reveal 2, and move 13 to the bottom.  The deck is now [3,11,5,17,7,13].
We reveal 3, and move 11 to the bottom.  The deck is now [5,17,7,13,11].
We reveal 5, and move 17 to the bottom.  The deck is now [7,13,11,17].
We reveal 7, and move 13 to the bottom.  The deck is now [11,17,13].
We reveal 11, and move 17 to the bottom.  The deck is now [13,17].
We reveal 13, and move 17 to the bottom.  The deck is now [17].
We reveal 17.
Since all the cards revealed are in increasing order, the answer is correct.
*/
# include<iostream>
# include<vector>
# include<queue>
# include<algorithm>
using namespace std;
vector<int> card (vector<int>&v){
    sort(v.begin(),v.end());
    int n = v.size();
    queue<int>q;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        q.push(i); // queue te push back kore dilam array index gulo k
    }

    for(int i=0;i<n;i++){
        int idx = q.front();
        // poping front and push into tha back 
        q.pop();// front j acha taka pop kore dilam
        q.push(q.front());// dia q te push kore dilam tar porer ja element ta 
        q.pop(); // takao queue thaka bar kore debo 
        ans[idx]= v[i];
    }
    return ans;
}
int main(){
    int 
    arr[]={17,13,11,2,3,5,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];

    }
    vector<int>p = card(v);
    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
}
/*

You are given an array of integers stones where stones[i] is the weight of the ith stone.

We are playing a game with the stones. On each turn, we choose the heaviest two stones and smash them together. Suppose the heaviest two stones have weights x and y with x <= y. The result of this smash is:

If x == y, both stones are destroyed, and
If x != y, the stone of weight x is destroyed, and the stone of weight y has new weight y - x.
At the end of the game, there is at most one stone left.

Return the weight of the last remaining stone. If there are no stones left, return 0.

 

Example 1:

Input: stones = [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of the last stone.
*/
# include<iostream>
# include<vector>
# include<queue>
# include<algorithm>
# include<unordered_map>
using namespace std;
int stone(vector<int>&v){
   // int n = v.size();
    // priority_queue<int>pq;
    // for(int i=0;i<n;i++){
    //     pq.push(v[i]);
    // }
    // while(pq.size()>1){
    //     int x = pq.top();
    //     pq.pop();
    //     int y  = pq.top();
    //     pq.pop();
    //     int weight = abs(x-y);
    //     pq.push(weight);
    // }
    // if(pq.size()==1) return pq.top();
    // else return 0;


    // another method sorting

    while(v.size()>1){
        sort(v.begin(),v.end());
        int x = v[v.size()-1] ;
        v.pop_back();
        int y = v[v.size()-1] ;
        v.pop_back();

        int weight = abs(x-y);
        v.push_back(weight); 
    }
    if(v.size()==1) return v[0];
    else return 0;
}
int main(){
    int arr[] = {2,7,4,1,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n); 
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<stone(v);
}
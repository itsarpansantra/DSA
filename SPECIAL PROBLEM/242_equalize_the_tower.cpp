/*
You are given an array heights[] representing the heights of towers and another array cost[] where each element represents the cost of modifying the height of respective tower.

The goal is to make all towers of same height by either adding or removing blocks from each tower.
Modifying the height of tower 'i' by 1 unit (add or remove) costs cost[i].
Return the minimum cost to equalize the heights of all the towers.

Examples:

Input: heights[] = [1, 2, 3], cost[] = [10, 100, 1000]
Output: 120
Explanation: The heights can be equalized by either "Removing one block from 3 and adding one in 1" or "Adding two blocks in 1 and adding one in 2". Since the cost of operation in tower 3 is 1000, the first process would yield 1010 while the second one yields 120.
Input: heights[] = [7, 1, 5], cost[] = [1, 1, 1]
Output: 6
Explanation: The minimum cost to equalize the towers is 6, achieved by setting all towers to height 5.
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
int minCost(vector<int>&v , vector<int>&cost,int target){
    int total = 0;
    for(int i=0;i<v.size();i++){
        total+= abs(v[i]-target)*cost[i];
    }
    return total;
}
int min_cost(vector<int>&v , vector<int>&cost){

    int low = *min_element(v.begin(),v.end()); // find min element in array 
    int high = *max_element(v.begin(),v.end()); // find max element in array

    int ans = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        int cost1 = minCost(v,cost,mid);
        int cost2 = minCost(v,cost,mid+1);

        ans = min(cost1,cost2);

        if(cost1<cost2) high = mid-1;
        else low = mid+1;
    }
    return ans;
}
int main(){
    vector<int>v = {7,1,5};
    vector<int>cost = {1,1,1};
    cout<<min_cost(v,cost);
}
/*
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.

 

Example 1:

Input: score = [5,4,3,2,1]
Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
Example 2:

Input: score = [10,3,8,9,4]
Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].
*/
#include <bits/stdc++.h>
using namespace std;

vector<string> findRelativeRanks(vector<int>& score) {
    int n = score.size();

    vector<pair<int,int>> v;

    // store score with index
    for(int i = 0; i < n; i++)
        v.push_back({score[i], i});

    // sort descending
    sort(v.begin(), v.end(), greater<pair<int,int>>());

    vector<string> ans(n);

    for(int i = 0; i < n; i++) {
        if(i == 0)
            ans[v[i].second] = "Gold Medal";
        else if(i == 1)
            ans[v[i].second] = "Silver Medal";
        else if(i == 2)
            ans[v[i].second] = "Bronze Medal";
        else
            ans[v[i].second] = to_string(i + 1);
    }

    return ans;
}
int main(){
    vector<int>arr = {10,3,8,9,4};
    vector<string>str = findRelativeRanks(arr);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}
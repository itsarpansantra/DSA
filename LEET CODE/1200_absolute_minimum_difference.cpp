/*
Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr
 

Example 1:

Input: arr = [4,2,1,3]
Output: [[1,2],[2,3],[3,4]]
Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
Example 2:

Input: arr = [1,3,6,10,15]
Output: [[1,3]]
Example 3:

Input: arr = [3,8,-10,23,19,-4,-14,27]
Output: [[-14,-10],[19,23],[23,27]]
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
vector<vector<int>>absolute_minimum(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end());
    int absDiff = INT_MAX;
    // check minimum difference
    for(int i=1;i<n;i++){
        absDiff = min(absDiff,(v[i]-v[i-1]));
    }
    vector<vector<int>>ans;
    for(int i=1;i<n;i++){
        if((v[i]-v[i-1])==absDiff){
            ans.push_back({v[i-1],v[i]});
        }
    }
    return ans;
}
int main(){
    vector<int>v = {4,2,1,3};
    vector<vector<int>>s = absolute_minimum(v);
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s[0].size();j++){
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
}
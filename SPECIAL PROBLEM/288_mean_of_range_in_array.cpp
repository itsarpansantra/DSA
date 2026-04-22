/*
Given an integer array arr[] and a 2D array queries[][]. Each query queries[i] = [l, r] represents a subarray ranging from index l to r (inclusive). For every query, compute the mean (average) of the elements in the specified range, and return the floor value of that mean.

Return an array where each element corresponds to the result of a query.

Examples:

Input: arr[] = [1, 2, 3, 4, 5], queries[][] = [[0, 2], [1, 3], [0, 4]]
Output: [2, 3, 3]
Explanation: The array is [1, 2, 3, 4, 5].
Query 1: l = 0, r = 2 → subarray [1, 2, 3] → sum = 6 → mean = 6/3 = 2
Query 2: l = 1, r = 3 → subarray [2, 3, 4] → sum = 9 → mean = 9/3 = 3
Query 3: l = 0, r = 4 → subarray [1, 2, 3, 4, 5] → sum = 15 → mean = 15/5 = 3
Hence the answer is [2, 3, 3]
Input: arr[] = [6, 7, 8, 10], queries[][] = [[0, 3], [1, 2]]
Output: [7, 7]
Explanation: The array is [6, 7, 8, 10].
Query 1: l = 0, r = 3 → subarray [6, 7, 8, 10] → sum = 31 → mean = 31/4 = 7 (floor value)
Query 1: l = 1, r = 2 → subarray [7, 8] → sum = 15 → mean = 15/2 = 7 (floor value)
Hence the answer is [7, 7]
*/
# include<bits/stdc++.h>
using namespace std;
vector<int>mean_range(vector<int>&arr ,vector<vector<int>> &v){
    int n = arr.size();
    
        // Step 1: Build prefix sum array
    vector<long long> prefix(n);
    prefix[0] = arr[0];
        
    for(int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }
        
    vector<int> ans;
        
        // Step 2: Process queries
    for(auto &q : queries) {
        int l = q[0];
        int r = q[1];
            
        long long sum;
        if(l == 0) sum = prefix[r];
        else sum = prefix[r] - prefix[l - 1];
            
        int mean = sum / (r - l + 1); // floor automatically
        ans.push_back(mean);
    }
        
    return ans;
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    vector<vector<int>> v = {{0,2},{1,3},{0,4}};
    vector<int>p = mean_range(arr,v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
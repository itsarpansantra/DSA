/*
Given an unsorted array arr[] and a 2D array queries[][] of size q, where each query is in the form of [a, b]. For each query, count how many elements in arr[] lie within the range [a, b], i.e., elements satisfying a ≤ x ≤ b.

Return the results for all queries as a list of integers, where each integer corresponds to the count of elements in the respective query range.

Examples:

Input: arr[] = [1, 4, 2, 8, 5], queries[][] = [[1, 4], [3, 6], [0, 10]]
Output: [3, 2, 5]
Explanation: Query [1, 4]: Elements in range → [1, 4, 2] → Count = 3
Query [3, 6]: Elements in range → [4, 5] → Count = 2
Query [0, 10]: All elements → [1, 4, 2, 8, 5] → Count = 5
Input: arr[] = [10, 20, 30, 40, 50], queries[][] = [[5, 15], [25, 45], [10, 50]]
Output: [1, 2, 5]
Explanation: Query [5, 15]: Elements in range → [10] → Count = 1
Query [25, 45]: Elements in range → [30, 40] → Count = 2
Query [10, 50]: Elements in range → [10, 20, 30, 40, 50] → Count = 5
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int> range(vector<int> &arr, vector<vector<int>> &queries) {
    int n = arr.size();
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<queries.size();i++){
        int l = queries[i][0];
        int r = queries[i][1];    
        int left = lower_bound(arr.begin(),arr.end(),l)-arr.begin();
        int right =upper_bound(arr.begin(),arr.end(),r)-arr.begin();
        ans.push_back(right-left);
    }
    return ans;
}
int main(){
    vector<int>v = {1, 4, 2, 8, 5};
    vector<vector<int>>query = {{1, 4},{3,6},{0,10}};
    vector<int>p =range(v,query);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    } 
}
/*
You are given an integer array arr[ ]. Your task is to count the number of subarrays where the first element is the minimum element of that subarray.

Note: A subarray is valid if its first element is not greater than any other element in that subarray.

Examples:

Input: arr[] = [1, 2, 1]
Output: 5
Explanation:
All possible subarrays are:
[1], [1, 2], [1, 2, 1], [2], [2, 1], [1]
Valid subarrays are:
[1], [1, 2], [1, 2, 1], [2], [1] -> total 5
Input: arr[] = [1, 3, 5, 2]
Output: 8
Explanation:
Valid subarrays are: [1], [1, 3], [1, 3, 5], [1, 3, 5, 2], [3], [3, 5], [5], [2] -> total 8
*/
# include<iostream>
# include<vector>
# include<stack>
using namespace std;
int subarray(vector<int>&arr){
    int n = arr.size();
    stack<int> st;
    vector<int> nextSmaller(n);
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
    
        if (st.empty()) nextSmaller[i] = n;
        else nextSmaller[i] = st.top();
        st.push(i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += nextSmaller[i] - i;
    }
    return ans;
}
int main(){
    vector<int>arr = {1,2,1};
    cout<<subarry(arr);
}
/*
Given an integer array arr[], the range of a subarray is defined as the difference between the largest and smallest elements within that subarray. Your task is to return the sum of the ranges of all possible subarrays in the array.

Note: It is guaranteed that the result will fit within a 32-bit integer.

Examples:

Input: arr[] = [1, 2, 3]
Output: 4
Explanation: The 6 subarray of arr are the following :
[1], range = largest - smallest = 1 - 1 = 0
[2], range = largest - smallest = 2 - 2 = 0
[3], range = largest - smallest = 3 - 3 = 0
[1, 2], range = largest - smallest = 2 - 1 = 1
[2, 3], range = largest - smallest = 3 - 2 = 1
[1, 2, 3], range = largest - smallest = 3 - 1 = 2
Sum of all ranges is 0 + 0 + 0 + 1 + 1 + 2 = 4
Input: arr[] = [-32, 0, -2, 72]
Output: 318
Explanation: 
[-32], range = largest - smallest = -32 - (-32) = 0
[-32, 0], range = largest - smallest = 0 - (-32) = 32
[-32, 0, -2], range = largest - smallest = 0 - (-32) = 32
[-32, 0, -2, 72], range= largest - smallest = 72 - (-32) = 104
[0], range = largest - smallest = 0 - 0 = 0
[0, -2], range = largest - smallest = 0 - (-2) = 2
[0, -2, 72], range = largest - smallest = 72 - (-2) = 74
[-2], range = largest - smallest = -2 - (-2) = 0
[-2, 72], range = largest - smallest = 72 - (-2) = 74
[72], range = largest - smallest = 72 - 72 = 0
Sum of all ranges is 0 + 32 + 32 + 104 + 0 + 2 + 74 + 0 + 74 + 0 = 318
*/

# include<iostream>
# include<vector>
# include<stack>
using namespace std;
int maxRange(vector<int>&v){
int n = arr.size();
    stack<int>st;
    vector<int>pg(n);
    // previous greater
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]<=arr[i]) st.pop();
        if(st.empty()) pg[i] = -1;
        else pg[i]=st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
        
        
    vector<int>ps(n); // previous smaller
    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>=arr[i]) st.pop();
        if(st.empty()) ps[i] = -1;
        else ps[i]=st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
        
    vector<int>ng(n); // next greater
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<arr[i]) st.pop();
        if(st.empty()) ng[i] = n;
        else ng[i]=st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
        
    vector<int>ns(n); // calculate next Smaller
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]>arr[i]) st.pop();
        if(st.empty()) ns[i] = n;
        else ns[i]=st.top();
        st.push(i);
    }
    while(!st.empty()) st.pop();
        
    int maxSum =0,minSum=0;
        
    for(int i=0;i<n;i++){
        int maxcnt = (i-pg[i])*(ng[i]-i);
        int mincnt = (i-ps[i])*(ns[i]-i);
            
        maxSum +=(arr[i]*maxcnt);
        minSum += (arr[i]*mincnt);
    }
    return maxSum-minSum;
}
int main(){
    vector<int>v = {1,2,3};
    cout<<maxRange(v);
}
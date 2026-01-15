/*
Given an array arr[] of positive integers. Reverse every sub-array group of size k.
Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. 

Examples:

Input: arr[] = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4, 5.
Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]
Explnation: Since k is greater than array size, the entire array is reversed.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void reverseInGroups(vector<int> &arr, int k) {
    int n = arr.size();
    for(int i=0;i<n;i+=k){
        int left=i;
        int right = min(k+i-1,n-1);
        reverse(arr.begin() + left, arr.begin() + right + 1);
    }
}
int main(){
    vector<int>v = {1, 2, 3, 4, 5};
    int k = 6;
    reverseInGroups(v,k);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
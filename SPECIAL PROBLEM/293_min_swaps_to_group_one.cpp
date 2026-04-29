/*
You are given a binary array arr[] consisting only of 0s and 1s. Determine the minimum number of swaps required to group all the 1s together in a contiguous subarray.

A swap operation allows you to choose any two indices i and j and exchange their values (i.e., swap(arr[i], arr[j])).

If the array contains no 1s, return -1.

Examples:

Input: arr[] = [1, 0, 1, 0, 1]
Output: 1
Explanation: Only 1 swap is required to group all 1's together. Swapping index 1 and 4 will give arr[] = [1, 1, 1, 0, 0].
Input: arr[] = [1, 0, 1, 0, 1, 1] 
Output: 1
Explanation: Only 1 swap is required to group all 1's together. Swapping index 0 and 3 will give arr[] = [0, 0, 1, 1, 1, 1].
Input: arr[] = [0, 0, 0]
Output: -1
Explanation: No 1s are present in the array, so return -1.
*/
# include<bits/stdc++.h>
using namespace std;
int min_swaps(vector<int>&v){
    int onecount =0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==1) onecount++;
    }
    if(onecount==0) return -1;
    int zerocount = 0;
    for(int i=0;i<onecount;i++){
        if(arr[i]==0) zerocount++;
    }
    int zero = zerocount;
    for(int i=onecount;i<n;i++){
        if(arr[i-onecount]==0) zerocount--;
        if(arr[i]==0) zerocount++;
        zero = min(zero,zerocount);
    }
    return zero;
}
int main(){
    vector<int>v = {1, 0, 1, 0, 1, 1};
    cout<<min_swaps(v);
}
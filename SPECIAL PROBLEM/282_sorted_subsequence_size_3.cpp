/*
Given an array arr[], find any subsequence of three elements such that, arr[i] < arr[j] < arr[k] and (i < j < k).

If such a subsequence exists, return the three elements as an array. Otherwise, return an empty array.

Note:

The driver code will print 1 if the returned subsequence is valid and present in the array.
The driver code will print 0 if no such subsequence exists.
If the returned subsequence does not satisfy the required format or conditions, the output will be -1.
Examples :

Input: arr[] = [12, 11, 10, 5, 6, 2, 30]
Output: 1
Explanation: As 5 < 6 < 30, and they  appear in the same sequence in the array. So output is 1.
Input: arr[] = [1, 2, 3, 4]
Output: 1 
Explanation: As the array is sorted, for every i, j, k, where i < j < k, arr[i] < arr[j] < arr[k].So output is 1.
Input: arr[] = [4, 3, 2, 1]
Output: 0
Explanation: No such Subsequence exist, so empty array is returned (the driver code automatically prints 0 in this case).
*/
# include<bits/stdc++.h>
using namespace std;
vector<int> sorted_subsequence(vector<int>&v){
    int n = arr.size();
    if(n<3) return {};
    vector<int>smaller(n,-1); // create smaller index array 
    vector<int>greater(n,-1); // greater index array
        
    int min_idx=0;
    for(int i=1;i<n;i++){
        if(arr[i]<=arr[min_idx]){
            min_idx=i;
        }
        else smaller[i] = min_idx; // for minimum index 
    }
    int max_idx=n-1;
        
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=arr[max_idx]){
            max_idx=i;
        }
        else greater[i] = max_idx; // for greater index
    }
        
    for(int i=0;i<n;i++){
        if(smaller[i]!=-1 && greater[i]!=-1){
            return {arr[smaller[i]],arr[i],arr[greater[i]]}; // then pair it 
        }
    }
    return {};
}
int main(){
    vector<int>v = {12, 11, 10, 5, 6, 2, 30};
    vector<int>p = sorted_subsequence(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
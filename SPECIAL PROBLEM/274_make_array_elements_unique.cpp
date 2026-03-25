/*
Given an integer array arr[ ], your task is to find the minimum number of increment operations required to make all the array elements unique. i.e. no value in the array should occur more than once. In one operation, a value can be incremented by 1 only.

Note: The answer will always fit into a 32-bit integer.

Examples :

Input: arr[] = [3, 2, 1, 2, 1, 7]
Output: 6
Explanation: After 6 moves, the array could be [3, 4, 1, 2, 5, 7]. It can be shown that it is impossible for the array to have all unique values with 5 or less operations.
Input: arr[] = [1, 2, 2]
Output: 1
Explanation: After one operation [2 -> 3], the array could be [1, 2, 3].
Input: arr[] = [5, 4, 3, 2, 1]
Output: 0
Explanation: All elements are unique.
*/
# include<bits/stdc++.h>
using namespace std;
int unique_array(vector<int>&v){
    sort(v.begin(),v.end());
    int count=0;
    for(int i=1;i<v.size();i++){
        if(v[i]<=v[i-1]){
            int neded = v[i-1]+1; // actually how mush just greater previous one
            count+= = (neded-arr[i]); // how much increase
            v[i] = neded; // array next element for compareing
        }
    }
    return count;
}
int main(){
    vector<int>v = {3, 2, 1, 2, 1, 7};
    cout<<unique_array(v);
}
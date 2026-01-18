/*
You are given a sorted array arr[] and a 2D array queries[][], where queries[i] represents a query in the form [l, r, x]. For each query, count how many times the number x appears in the subarray arr[l...r] (inclusive).

Examples:

Input: arr[] = [1, 2, 2, 4, 5, 5, 5, 8], queries[][] = [[0, 7, 5], [1, 2, 2], [0, 3, 7]]
Output: [3, 2, 0]
Explanation:
Query [0, 7, 5] → elements from index 0 to 7 are [1, 2, 2, 4, 5, 5, 5, 8].
Number 5 occurs 3 times.
Query [1, 2, 2] → subarray is [2, 2], and 2 occurs 2 times.
Query [0, 3, 7] → subarray is [1, 2, 2, 4], and 7 is not present.
Input: arr[] = [1, 3, 3, 3, 6, 7, 8], queries[][] = [[0, 3, 3], [4, 6, 3], [1, 5, 6]]
Output: [3, 0, 1]
Explanation:
Query [0, 3, 3] → subarray [1, 3, 3, 3], and 3 appears 3 times.
Query [4, 6, 3] → subarray [6, 7, 8], 3 not found.
Query [1, 5, 6] → subarray [3, 3, 3, 6, 7], and 6 occurs 1 time.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int find(int l , int r , int x,vector<int>&v){
    int count =1;
    int low = l,high =r,idx=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==x) {
            idx=mid;
            break;
        }
        else if(v[mid]<x) low =mid+1;
        else high = mid-1;
    }
    if(idx==-1) return 0;
    int i = idx-1;
    while(i>=l && v[i]==x){
        count++;
        i--;
    }
    i =idx+1;
    while(i<=r && v[i]==x){
        count++;
        i++;
    }
    return count ;
}
// another approach 
// int find(int l , int r , int x,vector<int>&v){
//     int count =0;
//     for(int i=l;i<=r;i++){
//         if(v[i]==x) count++;
//     }
//     return count ;
// }

vector<int>range(vector<int>&v,vector<vector<int>>&p){
    int n = p.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int l = p[i][0];
        int r = p[i][1];
        int x = p[i][2];
        int d = find(l,r,x,v);
        // better toc 
        // int left = lower_bound(v.begin() + l, v.begin() + r + 1, x) - v.begin();
        // int right = upper_bound(v.begin() + l, v.begin() + r + 1, x) - v.begin();
        ans.push_back(d);
    }
    return ans;
}
int main(){
    vector<int>v= {1, 2, 2, 4, 5, 5, 5, 8};
    vector<vector<int>>p = {{0,7,5},{1,2,2},{0,3,7}};
    vector<int>s = range(v,p);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
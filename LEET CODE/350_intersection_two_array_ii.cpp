/*
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>intersection(vector<int>&a,vector<int>&b){
    vector<int>ans;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]) j++;
        else i++;
    }
    return ans;
}
int main(){
    vector<int>a = {4,9,5};
    vector<int>b = {9,4,9,8,4};
    vector<int>c = intersection(a,b);
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
}


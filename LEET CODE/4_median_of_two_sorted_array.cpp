/*
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
*/
# include<iostream>
# include<vector>
using namespace std;
double median(vector<int>&v1,vector<int>&v2){
    int n = v1.size();
    int m = v2.size();
    vector<int>marge(n+m);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1&&j<=m-1){
        if(v1[i]<v2[j]){
           marge[k]=v1[i];
            i++;
            k++;
        }
        else{
            marge[k]=v2[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<=m-1){
            marge[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            marge[k]=v1[i];
            i++;
            k++;
        }
    }
    int s = m+n;
    if(s%2==0){
        return ((marge[s/2]+marge[s/2-1])/2.0);
    }
    else return  marge[s/2];
}
int main(){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(2);
    v2.push_back(4);
    cout<<median(v1,v2);
}

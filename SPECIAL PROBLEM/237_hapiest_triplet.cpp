/*
You are given three arrays a[], b[], c[] of the same size . Find a triplet such that (maximum-minimum) in that triplet is the minimum of all the triplets. A triplet should be selected so that it should have one number from each of the three given arrays. This triplet is the happiest among all the possible triplets. Print the triplet in decreasing order.

Note: If there are 2 or more smallest difference triplets, then the one with the smallest sum of its elements should be displayed.

Examples:

Input: a[] = [5, 2, 8] , b[] = [10, 7, 12] , c[] = [9, 14, 6]
Output: [7, 6, 5]
Explanation: The triplet [5, 7, 6]  has difference (maximum - minimum)= (7 - 5) = 2 which is minimum of all triplets.  
Input: a[] = [15, 12, 18, 9] , b[] = [10, 17, 13, 8] , c[] = [14, 16, 11, 5]
Output: [11, 10, 9]
Explanation: Multiple triplets have the same minimum difference, and among them [11, 10, 9] has the smallest sum, so it is chosen.
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
vector<int>triplet(vector<int>&a,vector<int>&b,vector<int>&c){
    // sort 3 array
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int min_diff = INT_MAX;
    int min_sum = INT_MAX;
    int i=0,j=0,k=0;
    vector<int>ans(3);
    while(i<a.size()&&j<b.size()&&k<c.size()){
        int x = a[i],y=b[j],z=c[k];

        int mn = min({x,y,z}); // find minimum in triplet 
        int mx = max({x,y,z}); // find max in triplet
        int diff = mx-mn; 
        int sum = x+y+z; // their sum 

        if(diff<min_diff || (diff==min_diff && sum<min_sum )){
            min_sum = sum; 
            min_diff = diff;
            ans = {x,y,z};
        }
        // check minimum element present which triplet
        if(mn==x)i++; 
        else if(mn==y) j++;
        else k++;
    }
    // sort desending oredr
    sort(ans.begin(),ans.end(),greater<int>());
    return ans;
}
int main(){
    vector<int>a = {15, 12, 18, 9};
    vector<int>b = {10, 17, 13, 8};
    vector<int>c = {14, 16, 11, 5};
    vector<int>p = triplet(a,b,c);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
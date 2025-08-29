/*
Example 1:

Input: nums = [4,5,2,1], queries = [3,10,21]
Output: [2,3,4]
Explanation: We answer the queries as follows:
- The subsequence [2,1] has a sum less than or equal to 3. It can be proven that 2 is the maximum size of such a subsequence, so answer[0] = 2.
- The subsequence [4,5,1] has a sum less than or equal to 10. It can be proven that 3 is the maximum size of such a subsequence, so answer[1] = 3.
- The subsequence [4,5,2,1] has a sum less than or equal to 21. It can be proven that 4 is the maximum size of such a subsequence, so answer[2] = 4.
Example 2:

Input: nums = [2,3,4,5], queries = [1]
Output: [0]
Explanation: The empty subsequence is the only subsequence that has a sum less than or equal to 1, so answer[0] = 0.

*/
#include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>subsequences(vector<int>&v,vector<int>&p){
    int n = v.size();
    int m = p.size();
    vector<int>ans(m);
    sort(v.begin(),v.end());
    //make v prefix sum 
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    for(int i=0;i<m;i++){// check every quarry . means p 
        int length = 0; // initially 
        // for(int j=0;j<n;j++){
        //     if(v[j]>p[i]) break;
        //     length++;
        // }
        //atar badola binary search lagabo
        int low=0;
        int high = n-1;
        while(low<=high){
            int mid =(low+high)/2;
            if(v[mid]>p[i]) high =mid-1;
            else {
                length = mid+1;
                low=mid+1;
            }
        }
        ans[i]=length;
    }
    return ans ;
}
int main(){
    int arr[]={4,5,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }

    int brr[]={3,10,21};
    int m = sizeof(arr)/sizeof(arr[0]);
    vector<int>p(m);
    for(int i=0;i<m;i++){
        p[i]=brr[i];
    }

    vector<int>ans =subsequences(v,p); 
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
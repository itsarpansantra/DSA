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
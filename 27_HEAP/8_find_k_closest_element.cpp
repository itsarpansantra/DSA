/*
Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3

Output: [1,2,3,4]
*/
# include<iostream>
# include<vector>
# include<queue>
# include<algorithm>
# include<unordered_map>
using namespace std;
vector<int>closest(vector<int>&v,int k , int x){
    int n = v.size();
    priority_queue< pair<int,int> > pq;
    for(int i=0;i<n;i++){
        int distance = abs(x-v[i]);
        pair<int,int> p = {distance,v[i]};
        pq.push(p);
        if(pq.size()>k) pq.pop();
    }
    vector<int>ans;
    while(pq.size()>0){
        int ele = pq.top().second;
        ans.push_back(ele);
        pq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k =3;
    int x =3;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vector<int>p = closest(v,k,x);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
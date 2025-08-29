/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
*/
# include<iostream>
# include<vector>
# include<queue>
# include<unordered_map>
using namespace std;
typedef pair<int,int> pi;
vector<int>frequent(vector<int>&v,int k){
    unordered_map<int,int>m;
    for(int ele:v){
        m[ele]++; // map element ar frequency push kore dilam 
    }
    priority_queue<pi, vector<pi> , greater<pi> > pq;

    // priority queue te push korbo 
    for(auto x:m){
        int ele = x.first;
        int freq = x.second;
        pair<int,int> p = {freq,ele}; // heap a pair hisaba first freq then element
        pq.push(p); // 
        if(pq.size()>k) pq.pop(); // k r size element roya jaba queue te 
    }

    // travel in heap
    vector<int>ans;
    while(pq.size()>0){
        int ele = pq.top().second; // amaka k to element bolta hoba to element push korbo akta vector a 
        ans.push_back(ele);
        pq.pop();
    }
    return ans;
}
int main(){
    int arr[] = {1,3,2,1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int k = 2;
    vector<int> p = frequent(v,k);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
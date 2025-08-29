# include<iostream>
# include<vector>
# include<queue>
using namespace std;
vector<int>maximum(vector<int>&v ,int k){
    if(k==1) return v;
    deque<int>dq;
    vector<int>ans;
    int n = v.size();
    for(int i=0;i<n;i++){
        while(dq.size()>0 && v[i]>v[dq.back()]) dq.pop_back();
        dq.push_back(i);
        int j = i-k+1;
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1)ans.push_back(v[dq.front()]);
    }
    return ans;
}
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int k=3;
    vector<int>p = maximum(v,k);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
# include<iostream>
# include<vector>
# include<queue>
using namespace std;
vector<int>maximum(vector<int>&v,int k){
    if(k==1) return v; // window size 1 mana oi tai max element 
    deque<int>dq; // decresing order index 
    vector<int>ans; // i shoud be minimum k-1
    int n = v.size();
    for(int i=0;i<n;i++){
        while(dq.size()>0 && v[i]>v[dq.back()]) dq.pop_back();
        dq.push_back(i); // only push index
        int j = i-k+1; // j = start of the window  . i end of the window
        while(dq.front()<j) dq.pop_front();
        if(i>=k-1) ans.push_back(v[dq.front()]);
    }
    return ans;
}
int main() {
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k =3;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }

    vector<int>p = maximum(v,k);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
# include<iostream>
# include<vector>
# include<algorithm>
# include<unordered_set>
# include<unordered_map>
using namespace std;
bool unique(vector<int>&v){
    int n = v.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[v[i]]++;
    }
    unordered_set<int>st;
    for(auto p:m){
        int freq = p.second;
        if(st.find(freq)!=st.end()) return false;
        else st.insert(freq);
    }
    return true;
}
int main(){
  int arr[] = {1,2,2,1,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<unique(v);
}
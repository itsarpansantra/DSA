# include<iostream>
# include<vector>
# include<unordered_map>
using namespace std;
vector<int> sum(vector<int>&v,int target){
    vector<int>ans;
    int n =v.size();
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        int rem = target-v[i]; // rem = remining 
        if(m.find(rem)!=m.end()){
            ans.push_back(m[rem]);
            ans.push_back(i);
        }
        else m[v[i]] = i;
    }
    return ans;
}
int main(){
    int arr[] = {2,5,11,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int target = 9;
    vector<int>p = sum(v,target);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
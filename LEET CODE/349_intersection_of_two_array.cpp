# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int>intersection(vector<int>&v,vector<int>&p){
    int n = v.size();
    int m = p.size();

    sort(v.begin(),v.end());
    sort(p.begin(),p.end());

    vector<int>ans;

    int i=0;
    int j =0;
    int k=0;
    while(i<n && j<m){
        if(v[i]==p[j]){
            if(ans.size()==0|| ans[ans.size()-1]!=v[i]){
                ans.push_back(v[i]);
            }
            i++;
            j++;
        }
        if(v[i]>p[j]) j++;
        else i++;
    }
    return ans;
}
int main(){
    vector<int> v= {1,2,2,1};
    vector<int> p ={2,2};
    vector<int> ans = intersection(v,p);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
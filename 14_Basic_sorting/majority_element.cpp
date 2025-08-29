# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int majority(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end());
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        return v[mid];
    }
}
int main(){
    int arr []={2,2,1,1,1,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<majority(v);
}
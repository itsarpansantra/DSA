# include<iostream>
# include<vector>
using namespace std;
int peekIdx(vector<int>&v){
    int n = v.size();
    int idx=-1;
    for(int i=1;i<=n-2;i++){
        if(v[i]>v[i+1] && v[i]>v[i-1]){
            idx=i;
            break;
        }
    }
    return idx;
}
int main(){
    int arr[]={0,1,2,4,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        arr[i]=v[i];
    }
    cout<<peekIdx(v);

}
// given a range [m,n] (both inclusive) where 0<=m , n<=10000,find the sum of all integers b/w m and n 
// ex : 0 3
//output : 6
//explanation : 0+1+2+3=6
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int h_index(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end());
    int h = 0;
    for(int i = 0; i < n; i++) {
        // Number of papers with citations >= citations[i]
        int papers = n - i;
        if(v[i] >= papers) {
            h = max(h, papers);
        }
    }
    return h;
}
int main(){
    int arr[]={0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<h_index(v);
}
// 1 2 3 4 5 6 7 8 9
// 5 6 9 7 8 2 3 1 0

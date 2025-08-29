# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={4,5,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n); // 4 5 6 8
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; // v, arr 2to likhla hoba
    }
}

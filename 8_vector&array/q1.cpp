//Count the number of elements strictly greater than x.
# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={2,5,6,7,3,9};   
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=4;
    int count=0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    for(int i=0;i<n;i++){
        if(v[i]>x)count++;
    }
    cout<<count;
}
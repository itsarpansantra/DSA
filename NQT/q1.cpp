// what is the sum of unique elements in an array 
// input:[1,3,2,3,2,4]
// output : 10

# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    int arr[]={1,3,2,3,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum =0;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){
        if(v[i]!=v[i+1]) sum+=v[i];
        else if(i==n-1) sum+=v[i];
    }
    cout<<sum;
}
# include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={3,1,3,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    int i=0;
    while(i<n){
        int correctIdx = arr[i];
        if(arr[correctIdx]==arr[i]){
            cout<<arr[i]<<" "; 
            break;
        } 
        else swap(arr[correctIdx] , arr[i]);
        
    }

}

//another processes

// int main(){
//     int arr[]={3,3,3,3,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     vector<int>v(arr,arr+n);
//     int actualsum = n*(n-1);
//     actualsum/=2;
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     sum =sum-actualsum;
//     cout<<sum;
// }
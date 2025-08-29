//Check if the given array is sorted or not.
# include<iostream>
# include<vector>
# include<climits>
using namespace std;
int main(){
    int arr[]={2,5,6,7,3,9};   
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    
    for(int i=1;i<n;i++){
        if(v[i-1]>v[i]){
        cout<<"Not Sorted";
        return 0;
        }
    }
    cout<<"array is sortd";
}
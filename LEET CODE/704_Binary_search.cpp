# include<iostream>
#include<vector>
using namespace std;
int search(vector<int>&v,int target){
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==target) return mid;
        else  if(v[mid]>target) high=mid-1;
        else low =mid+1;
    }
    return -1;
    
}
int main(){
    int arr[]={-5,1,3,6,7,12,15,20,45,48};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    int target = 20;
   cout<<search(v,target);
    
}
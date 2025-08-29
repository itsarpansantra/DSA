# include<iostream>
# include<vector>
using namespace std;
int  main(){
    
    int arr[]={4,5,0,1,9,0,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    //int i=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)v.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i];
    }

}
# include<iostream>
using namespace std;
int main(){
    int arr[]={5,7,6,2,1,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i =0;
    while(i<n){
        int correctIndex=arr[i]-1;
        if(i==correctIndex) i++;
        else swap(arr[i],arr[correctIndex]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
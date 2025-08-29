//Given an array, predict if the array contains duplicates or not.
# include<iostream>
# include<climits>
using namespace std;
int main(){
    int n ;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
   for(int i=0;i<n;i++){
   cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]) {
            cout<<i<<" index is duplicate";
            break;
        }
    }
    }
}
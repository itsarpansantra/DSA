//check if the given array is sorted or not.
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
   bool flag = true;
   for(int i=0;i<n;i++){
    if(arr[i]>arr[i+1]) flag = false;
    }
    if(flag==true) cout<<"array is sorted ";
    else cout<<"array is not sorted";
}
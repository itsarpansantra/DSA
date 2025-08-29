// duplicate element present in array 
# include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;
  int arr[n];
  cout<<"ENter array element: ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  // int x;
  // cout<<"enter x: ";
  // cin>>x;
  // int count=0;
  // for(int i=0;i<n;i++){
  //   if(arr[i]>x) count++;
  // }
  //cout<<count;

  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]==arr[j]){
        cout<<arr[i]<<" is duplicate";
        break;
      }
    }
  }
  
}
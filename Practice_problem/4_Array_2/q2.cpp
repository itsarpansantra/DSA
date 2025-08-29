// WAP to find the largest three elements in the array.
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
   int max=INT_MIN,smax=INT_MIN,tmax =INT_MIN;
   for(int i=0;i<n;i++){
    if(max<arr[i]) max=arr[i];
    }
    cout<<"first max element: "<<max<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    cout<<"second max element: "<<smax<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]!=max && arr[i]!=smax && tmax<arr[i]) tmax=arr[i];
    }
    cout<<"third max element: "<<tmax;

}
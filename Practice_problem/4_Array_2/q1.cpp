//Count the number of elements strictly greater than x.
# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
   for(int i=1;i<=n;i++){
   cin>>arr[i];
   }
   int count=0;
   int x ;
   cout<<"Enter x: ";
   cin>>x;
   for(int i=1;i<=n;i++){
    if(x<arr[i]) count++;
    }
    cout<<count;
}
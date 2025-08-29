// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
# include<iostream>
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
   int sum1 =0;
   int sum2 =0;
   for(int i=0;i<n;i++){
    if(i%2!=0) sum1+=arr[i];
    else sum2+=arr[i];
   }
   cout<<"difference b/w even or odd numbers " << abs(sum1-sum2);
}
// 0 1 2 3 4 
// 2 4 7 9 6
// even indx sum = 15
// odd indx sum = 13
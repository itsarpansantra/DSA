# include<iostream>
# include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
   // int max = arr[0];
  //another we should right
    int max =INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
}
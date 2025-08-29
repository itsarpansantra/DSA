# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    int product=1;
    cout<<"Enter array element: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n-1;i++){
        product*=arr[i];
    }
    cout<<product;
}
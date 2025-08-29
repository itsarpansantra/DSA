# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    int arr[n];
    int x;
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Enter searching element: ";
    cin>>x;
    bool flag =false;
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) flag =true;
    }
    if(flag==true) cout<<"Number found";
    else cout<<" number doesnot found";

}
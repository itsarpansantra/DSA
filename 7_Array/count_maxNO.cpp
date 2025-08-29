// problem statement: Ami akta element debo & dekhbo arry te oi element ter thaka kato gulo baro element acha 
// Q: WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
# include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter searching element: ";
    cin>>x;
   int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x) count++;
    }
    cout<<count;
}
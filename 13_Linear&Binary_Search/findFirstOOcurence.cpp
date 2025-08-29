// amaka khujte hoba first target element kon index acha 
# include<iostream>
using namespace std;
int main(){
    int arr[]={-5,1,2,2,3,3,3,15,20,20,45,48};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=3; // i found where is my first 3
    bool flag = false;
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true ;
                cout<<mid;
                break;
            }
            else{
           high=mid-1;
            }
        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false ) cout<<-1;
    
}
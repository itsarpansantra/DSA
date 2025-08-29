// given a sorted array of non negative distinct integer , find the smallest misssing non-negative element it
// mana akta array te first j element missing thakba taka print korta hoba

// using linear search
// # include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,2,3,4,6,7,12,15,20,45,48};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(i!=arr[i]){
//             cout<<i;
//             break;
//         }
//     }
// }

// using binary search


# include<iostream>
using namespace std;
int main(){
   int arr[]={0,1,2,3,4,6,7,12,15,20,45,48};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low =0;
    int high = n-1;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==mid) low =mid+1;     
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
}
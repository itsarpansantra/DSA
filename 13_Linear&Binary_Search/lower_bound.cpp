// given a sorted integer array and an integer 'x' . find the lower bound of x
//  mana akta element nabo seta jadi arrray na thaka . taba tar sthan kothy satay dhakbo

// linear search

// # include<iostream>
// using namespace std;
// int main(){
//     int arr[]={-5,1,3,6,7,12,15,20,45,48};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x=16;
//     for(int i=0;i<n;i++){
//         if(arr[i]>x)
//         {
//            cout<<arr[i-1];
//             break;
//         }
//     }
// }


// binary search



# include<iostream>
using namespace std;
int main(){
    int arr[]={-5,1,3,6,7,12,15,20,45,48};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=16;
    bool flag = false;
    int low =0;
    int high = n-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]==x){
            flag = true ;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false ) cout<<arr[high];
    // upper bound chayla cout<< arr[low] korla hoye jaba
}
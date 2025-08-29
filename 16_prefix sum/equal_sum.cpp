//  Check if array can be partitioned into 2 continuous arrays of equal sum
// mana akta array input doa thakaba . taka kotha thaka divide korla 2 dika sum ak hoba
#include<iostream>
# include<vector>
using namespace std;
int main(){
    int arr[]={2,1,4,5,3,2,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    //prefix sum
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
    //check
    int idx = -1;
    for(int i=1;i<n;i++){
       if(2*arr[i]==arr[n-1]) {
        idx=i;
        break;
       }
    }

    if(idx!=-1) cout<<"partitin is possible at index : "<<" " <<idx; // check true statement only
    else cout<<"partitin is not possible";
}
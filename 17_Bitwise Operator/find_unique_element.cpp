// given an integer array where element occurs twice eccept one occurs only once . find the unique element.
// mana akta thakba sab element 2 bar thaka . 1 ta element 1 bar thakab
# include<iostream>
using namespace std;
int main(){
    int arr[]={4,8,6,7,6,9,8,7,4};
    int result = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        result = result^arr[i]; // 4^8^6^7^6^9^8^7^4 . n^n = 0 . 0^n = n
    }
    cout<<result;
}
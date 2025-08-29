# include<iostream>
# include<climits>
using namespace std;

// using sliding window
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum=INT_MIN;
    int maxIdx=-1;
    int k = 3;
    int prevSum=0;
    for(int i=0;i<k;i++){
        prevSum+=arr[i];
    }
    maxSum=prevSum;
    int i=1;
    int j =k;
    while(j<n){
        int currentSum = prevSum+arr[j]-arr[i-1];
        if(maxSum<currentSum){
            maxSum=currentSum;
            maxIdx=i;
        }
        prevSum=currentSum;
        i++;
        j++;
    }
    cout<<maxSum <<" "<<"starting index: "<<maxIdx;
}

// int main(){
//     int arr[]={7,1,2,5,8,4,9,3,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int maxSum=INT_MIN;
//     int maxIdx=-1;
//     int k = 3;
//     for(int i=0;i<n-k;i++){
//         int sum = 0;
//         for(int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//        if(maxSum<sum){
//         maxSum=sum;
//         maxIdx=i;
//        }
//     }
//     cout<<maxSum <<" "<<"starting index: "<<maxIdx;
// }
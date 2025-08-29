// given an integer array . find the longest subarray which has maximum possible bitwise AND value
// array r modha je value t baro hoba ar seta jota acha seta max subarray
# include<iostream>
# include<climits>

using namespace std;
int main(){
    int arr[]={4,5,6,4,7,3,9,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans=0;
    int max_el = INT_MIN;
    int count =0;
    for(int i=0;i<n;i++){
        if(max_el<arr[i]){ max_el=arr[i];
        count=1;
        }
        else if(arr[i]==max_el){
            count++;
        }
        ans = max(ans,count);
    }
    cout<<ans; // 2 to 9 acha . sob thaka baro 
}
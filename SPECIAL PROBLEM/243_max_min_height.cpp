/*
Given a garden with n flowers planted in a row, that is represented by an array arr[], where arr[i] denotes the height of the ith flower.You will water them for k days.
 In one day you can water w continuous flowers. Whenever you water a flower its height increases by 1 unit. You have to maximize the minimum height of all flowers after  k days of watering.

Examples:

Input: arr[] = [2, 3, 4, 5, 1], k = 2, w = 2
Output: 2
Explanation: The minimum height after watering is 2.
Day 1: Water the last two flowers -> arr becomes [2, 3, 4, 6, 2]
Day 2: Water the last two flowers -> arr becomes [2, 3, 4, 7, 3]
Input: arr[] = [5, 8], k = 5, w = 1
Output: 9
Explanation: The minimum height after watering is 9.
Day 1 - Day 4: Water the first flower -> arr becomes [9, 8]
Day 5: Water the second flower -> arr becomes [9, 9]
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
bool canMake(vector<int>& arr, int n, int k, int w, long long target) {
    vector<long long> added(n, 0);  // difference array
    long long operations = 0;
    long long current_add = 0;

    for (int i = 0; i < n; i++) {

        // remove expired effect
        if (i >= w)
            current_add -= added[i - w];

        long long height = arr[i] + current_add;

        if (height < target) {
            long long need = target - height;
            operations += need;

            if (operations > k)
                return false;

            current_add += need;
            added[i] = need;
        }
    }

    return true;
}
int minimum_height(vector<int>&arr,int k,int w){
    int n= arr.size();
    long long low = *min_element(arr.begin(), arr.end());
    long long high = low + k;
    long long ans = low;

    while (low <= high) {
        long long mid = (low + high) / 2;

        if (canMake(arr, n, k, w, mid)) {
            ans = mid;
            low = mid + 1;   // try bigger
        } else {
            high = mid - 1;  // try smaller
        }
    }

    return ans;
}
int main(){
    vector<int>v = {2,3,4,5,1};
    int k= 2; // day
    int w = 2; // continuous flower 
    cout<<minimum_height(v,k,w);
}
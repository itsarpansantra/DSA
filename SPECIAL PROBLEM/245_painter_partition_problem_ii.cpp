/*
Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available. Each painter takes 1 unit of time to paint 1 unit length of a board.

Determine the minimum amount of time required to paint all the boards, under the constraint that each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).

Examples:

Input: arr[] = [5, 10, 30, 20, 15], k = 3
Output: 35
Explanation: The optimal allocation of boards among 3 painters is - 
Painter 1 → [5, 10] → time = 15
Painter 2 → [30] → time = 30
Painter 3 → [20, 15] → time = 35
Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35
Input: arr[] = [10, 20, 30, 40], k = 2
Output: 60
Explanation: A valid optimal partition is - 
Painter 1 → [10, 20, 30] → time = 60
Painter 2 → [40] → time = 40
Job will be complete at time = max(60, 40) = 60
Input: arr[] = [100, 200, 300, 400], k = 1
Output: 1000
Explanation: There is only one painter, so the painter must paint all boards sequentially. The total time taken will be the sum of all board lengths, i.e., 100 + 200 + 300 + 400 = 1000.
*/
# include<iostream>
# include<vector>
using namespace std;
bool canPaint(vector<int>&v,int k,int time){
    int curr = 0;
    int painters = 1;

    for (int len : v) {
        // need new painter
        if (curr + len > time) { 
            painters++;
            curr = len;
            
            if (painters > k) return false;
        } 
        else curr += len;
    }
    return true;
}
int painter(vector<int>&v,int k){
    int low = *max_element(v.begin(), v.end()); // find max element in arrays
    int high =0; // sum of all elements
    for(int i=0;i<v.size();i++){
        high+=v[i];
    }
    int ans = high;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (canPaint(v, k, mid)) { // find max time to paint 
            ans = mid;
            high = mid - 1; // try smaller
        } 
        else {
            low = mid + 1;
        }
    }
    return ans;
}
int main(){
    vector<int>v={10, 20, 30, 40};
    int k = 2;
    cout<<paiter(v,k);
}
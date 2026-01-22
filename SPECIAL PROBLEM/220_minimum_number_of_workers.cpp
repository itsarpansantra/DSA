/*
You are given an array arr[], where arr[i] denotes the range of working hours a person at position i can cover.

If arr[i] ≠ -1, the person at index i can work and cover the time interval [i - arr[i], i + arr[i]].
If arr[i] = -1, the person is unavailable and cannot cover any time.
The task is to find the minimum number of people required to cover the entire working day from 0 to n - 1. If it is not possible to fully cover the day, return -1.

Examples:

Input: arr[] = [1, 2, 1, 0]
Output: 1
Explanation: The person at index 1 can cover the interval [-1, 3]. After adjusting to valid bounds, this becomes [0, 3], which fully covers the entire working day 0 to n -1. Therefore, only 1 person is required to cover the whole day.
Input: arr[] = [2, 3, 4, -1, 2, 0, 0, -1, 0]
Output: -1
Explanation: Persons up to index 2 cover interval [0…6], but working hour 7 cannot be cover as arr[7] = -1, Since the 7th hour cannot be covered by any person, it is impossible to cover the full working day.
Input: arr[] = [0, 1, 0, -1]
Output: -1
Explanation: The last hour cannot be covered by any person, so it is impossible to cover the full working day.
*/

# include<iostream>
# include<vector>
using namespace std;
int minWorker(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0;
    
        // reach[i] stores the furthest index reachable from index i
    vector<int> reach(n, -1);
    bool can_cover_start = false;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != -1) {
            int left = max(0, i - arr[i]);
            int right = min(n - 1, i + arr[i]);
            reach[left] = max(reach[left], right);
            if (left == 0) can_cover_start = true;
        }
    }
    
        // If no one can cover the very first hour (index 0), it's impossible
    if (!can_cover_start) return -1;
    
    int count = 0;
    int current_end = -1; 
    int max_farthest = -1;
    
    for (int i = 0; i < n; i++) {
        // Update the best potential reach we've found so far
        max_farthest = max(max_farthest, reach[i]);
    
        // If we reach a point we can't cover, return -1
        if (i > max_farthest) return -1;
         // If we've exhausted the range of the current selected people
        if (i > current_end) {
            count++;
            current_end = max_farthest;
                
            // Optimization: stop if we've already covered the end
            if (current_end >= n - 1) return count;
        }
    }
    
    return (current_end >= n - 1) ? count : -1;
}
int main(){
    vector<int>v = {2, 3, 4, -1, 2, 0, 0, -1, 0};
    cout<<minWorker(v);
}
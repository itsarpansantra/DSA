/*
You are given an array of intervals arr[][], where each interval is represented by two integers [start, end] (inclusive). Return the maximum number of intervals that overlap at any point in time.

Examples :

Input: arr[][] = [[1, 2], [2, 4], [3, 6]]
Output: 2
Explanation: The maximum overlapping intervals are 2(between (1, 2) and (2, 4) or between (2, 4) and (3, 6))
 
Input: arr[][] = [[1, 8], [2, 5], [5, 6], [3, 7]]
Output: 4
Explanation: The maximum overlapping intervals are 4 (between (1, 8), (2, 5), (5, 6) and (3, 7))
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int max_number_overlap(vector<vector<int>>&v){
    int n = v.size();
    // two farzi vactor
    vector<int>start(n); // for starting element every row 
    vector<int>end(n); // end element every row
    
    sort(start.begin(),start.end());
    sort(end.begin(),end.end());

    int i=0,j=0;
    int ans =0, curr=0;

    while(i<n && j<n){
        if(v[i]<=v[j]){ // that means present interval no overlaping 
            curr++;
            ans = max(ans,curr);
            i++;
        }
        else{ // if overlapping present 
            curr--;
            j++;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>>v = {{1, 8}, {2, 5}, {5, 6}, {3, 7}};
    cout<<max_number_overlap(v);
}
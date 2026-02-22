/*
Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].
Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.
Example 3:

Input: intervals = [[4,7],[1,4]]
Output: [[1,7]]
Explanation: Intervals [1,4] and [4,7] are considered overlapping.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<vector<int>>interval(vector<vector<int>>&v){
    // sort the array asending order
    sort(v.begin(),v.end());
    vector<vector<int>>ans;
    // first interval as current
    vector<int>curr = v[0];

    for(int i=1;i<v.size();i++){
        if(v[i][1]<=curr[1]){ // that means 1st row r first element 0th row 1th column compare . curr vector has only 2 element . it is 1d vector
            // then update curr 1st element only 
            curr[1] = max(v[i][1],curr[1]);
        }
        else{
            // its has no overlap 
            ans.push_back(curr);
            // then update curr
            curr = v[i];
        }
    }
    // push last interval
    ans.push_back(curr);
    return ans;
}
int main(){
    vector<vector<int>>v = {{1,3},{2,6},{8.10},{15,18}};
    vector<vector<int>>p = interval(v);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[0];j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*
Given an array of Intervals arr[][], where arr[i] = [starti, endi]. The task is to merge all of the overlapping Intervals.

Examples:

Input: arr[][] = [[1, 3], [2, 4], [6, 8], [9, 10]]
Output: [[1, 4], [6, 8], [9, 10]]
Explanation: In the given intervals we have only two overlapping intervals here, [1, 3] and [2, 4] which on merging will become [1, 4]. Therefore we will return [[1, 4], [6, 8], [9, 10]].
Input: arr[][] = [[6, 8], [1, 9], [2, 4], [4, 7]]
Output: [[1, 9]]
Explanation: In the given intervals all the intervals overlap with the interval [1, 9]. Therefore we will return [1, 9].
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<vector<int>> mergeOverlap(vector<vector<int>>& arr){
    int n = arr.size();
    if(arr.empty()) return {};
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    int start = arr[0][0]; 
    int end = arr[0][1];

    for(int i=1;i<n;i++){
        if(end>=arr[i][0]){ // if next index  r i th element jodi choto hoy 
            end = max(end,arr[i][1]); // tahola end r element ta update kore diba 
        }
        else{
            ans.push_back({start,end}); // ans push kore diba 
            start = arr[i][0]; 
            end = arr[i][1];
        }
    }
    ans.push_back({start,end});
    return ans;
}
int main(){
    vector<vector<int>>v={{1,3},{2,4},{6,8},{9,10}};
    vector<vector<int>>p = mergeOverlap(v);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[0].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
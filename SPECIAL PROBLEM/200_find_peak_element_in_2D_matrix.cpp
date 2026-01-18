/*
Given a 2D matrix mat[][], identify any peak element within the matrix.

An element is considered a peak if it is greater than or equal to its four immediate neighbors: top, bottom, left, and right. For corner and edge elements, any missing neighbors are treated as having a value of negative infinity.

Note: A peak element is not necessarily the global maximum, it only needs to satisfy the condition relative to its adjacent elements. Multiple peak elements may exist, return any one of them.
Note that the driver code will print true if you return the correct position of peak element, else it will print false.

Examples:

Input: mat[][] = [[10, 20, 15],           
                [21, 30, 14],
                 [7, 16, 32]]
Output: true
Explanation: One of the peak element is 30 at index (1, 1), which is greater than or equal to all its valid neighbors: Left = 21, Right = 14, Top = 20, Bottom = 16. So, it satisfies the peak condition. Alternatively, (2, 2) with value 32 also qualifies as a peak.
Input: mat[][] = [[17, 7],
                [11, 10]]
Output: true
Explanation: 17 is the only peak element at index (0, 0). Its neighbors are: Right= 7, Bottom = 11. Since 17 is greater than or equal to both (and top/left are out of bounds), it qualifies as a peak element.
*/
# include<iostream>
# include<vector>
using namespace std;
vector<int>peak(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();
    int low = 0,high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        int maxrow = 0;
        for(int i=0;i<n;i++){
            if(v[i][mid]>v[maxrow][mid]){
                maxrow=i;
            }
        }
        int left =-1;
        int right =-1;
        if(mid-1>=0){
            left = v[maxrow][mid-1];
        }
        if(mid+1<m){
            right = v[maxrow][mid+1];
        }
        if(v[maxrow][mid]>=left && v[maxrow][mid]>=right) return {maxrow,mid};
        else if(left>v[maxrow][mid]) high =mid-1;
        else low = mid+1;
    }
    return {-1,-1};
}
int main(){
    vector<vector<int>>v = {{10,20,15},{21,30,14},{7,16,32}};
    vector<int>s = peak(v);
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<" ";
    }
}
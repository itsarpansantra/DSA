/*
Given a row-wise sorted matrix mat[][] of size n*m, where the number of rows and columns is always odd. Return the median of the matrix.

Examples:

Input: mat[][] = [[1, 3, 5], 
                [2, 6, 9], 
                [3, 6, 9]]
Output: 5
Explanation: Sorting matrix elements gives us [1, 2, 3, 3, 5, 6, 6, 9, 9]. Hence, 5 is median.
Input: mat[][] = [[2, 4, 9],
                [3, 6, 7],
                [4, 7, 10]]
Output: 6
Explanation: Sorting matrix elements gives us [2, 3, 4, 4, 6, 7, 7, 9, 10]. Hence, 6 is median.
Input: mat = [[3], [4], [8]]
Output: 4
Explanation: Sorting matrix elements gives us [3, 4, 8]. Hence, 4 is median.
*/
# include<iostream>
# include<vector>
# include<algorithm>
# include<climits>
using namespace std;
int present(vector<vector<int>>&v){
    int n = v.size();
    int m = v[0].size();
    int low = INT_MAX;
    int high = INT_MIN;
    for(int i=0;i<n;i++){
        low = min(low,v[i][0]); // find low in matrix
        high= max(high,v[i][m-1]); // find high in matrix
    }
    int target = (n*m)/2; // this my target . we defined 

    while(low<=high){
        int mid = (low+high)/2; 
        int count =0;

        for(int i=0;i<n;i++){
            count+= upper_bound(v[i].begin(),v[i].end(),mid)-v[i].begin();
            // upper line mining
            /*
                [2, 4, 9]
                [3, 6, 7]
                [4, 7, 10]
                Say mid = 6.

                Row 1: [2, 4, 9]  Elements ≤ 6 → 2, 4 → 2 numbers  . upper_bound gives index 2 .  Count becomes 2
                Row 2: [3, 6, 7]  Elements ≤ 6 → 3, 6 → 2 numbers . upper_bound gives index 2 . Total count = 4
                Row 3: [4, 7, 10]   Elements ≤ 6 → 4 → 1 number   . upper_bound gives index 1  . Total count = 5                                      
                                                              
                count = 5
            */
        }
        if(count<=target) low = mid+1;
        else high = mid-1;
    }
    return low;
}
int main(){
    vector<vector<int>> v= {{2,4,9},{3,6,7},{4,7,10}};
    cout<< present(v);
}
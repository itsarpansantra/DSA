/*
Given an array of integers arr[]. You have to find the Inversion Count of the array. 
Note : Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

Examples:

Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
struct BIT {
    vector<int> tree;
    int n;
    BIT(int n) : n(n), tree(n+1, 0) {}
    void update(int i, int val) {
        for (; i <= n; i += (i & -i))
            tree[i] += val;
    }
    int query(int i) {
        int sum = 0;
        for (; i > 0; i -= (i & -i))
            sum += tree[i];
        return sum;
    }
};
int inversionCount(vector<int> &arr) {
    int n = arr.size();
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    for (int &x : arr)
        x = lower_bound(sortedArr.begin(), sortedArr.end(), x) - sortedArr.begin() + 1;
    
    // Step 2: BIT to count inversions
    BIT bit(n);
    int invCount = 0;
    for (int i = n - 1; i >= 0; i--) {
        invCount += bit.query(arr[i] - 1);
        bit.update(arr[i], 1);
    }
    
    return invCount;
}

int main(){
   vector<int>v ={2, 4, 1, 3, 5};
   cout<<inversionCount(v);
}
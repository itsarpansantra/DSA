/*
Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?

 

Example 1:

Input: nums = [3,2,1,5,6,4], k = 2
Output: 5
Example 2:

Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
Output: 4
 
*/
# include<iostream>
# include<queue>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,24,105,118};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    priority_queue<int, vector<int> , greater<int> >pq; // minheap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }

    // using array property
    // sort(arr.begin(),arr.end());
    // return arr[n-k];
    cout<<pq.top();
}
// /*
// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

// Return the sorted array.

 

// Example 1:

// Input: nums = [1,1,2,2,2,3]
// Output: [3,1,1,2,2,2]
// Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
// */
// # include<iostream>
// # include<vector>
// # include<queue>
// # include<unordered_map>
// using namespace std;
// typedef pair<int,int>p;
// vector<int>sort_array(vector<int>&v){
//     int n =v.size();
//     unordered_map<int,int>m; // ele , freq
//     for(int ele : v){ //push element in map 
//         m[ele]++;
//     }
//     priority_queue< p ,vector<p> , greater<p> >pq; // element push in mean heap
//     for(auto x:m){
//         int ele = x.first;
//         int freq = x.second;
//         pair<int,int>p = {freq,ele};
//         pq.push(p);
//     }
//     vector<int>ans;
//     while(pq.size()>0){
//         int freq = pq.top().first;
//         int val = pq.top().second;
//         pq.pop();
//         for(int i=0;i<freq;i++){
//             ans.push_back(val);
//         }
//     }

//     return ans;
// }
// int main(){
//     int arr[]={1,1,2,2,2,3};
//     int n = sizeof(arr)/ sizeof(arr[0]);
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         v[i] = arr[i];
//     }
//     vector<int>p = sort_array(v);
//     for(int i=0;i<p.size();i++){
//         cout<<p[i]<<" ";
//     }
// }
/*
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.

Return the sorted array.

 

Example 1:

Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.
*/
# include<iostream>
# include<vector>
# include<queue>
# include<unordered_map>
using namespace std;
typedef pair<int,int>p;
vector<int>sort_array(vector<int>&v){
  int n = v.size();
        unordered_map<int,int> m; // ele , freq
        for(int ele : v){ // push element in map 
            m[ele]++;
        }

        // min-heap: sort by freq, if same then by value descending
        priority_queue< p , vector<p> , greater<p> > pq;

        for(auto x : m){
            int ele = x.first;
            int freq = x.second;
            pq.push({freq, -ele});  // ✅ FIXED: use -ele to get descending order on tie
        }

        vector<int> ans;
        while(!pq.empty()){
            int freq = pq.top().first;
            int val = -pq.top().second;  // ✅ FIXED: reverse sign to get actual value
            pq.pop();
            for(int i = 0; i < freq; i++){
                ans.push_back(val);
            }
        }

    return ans;
}
int main(){
    int arr[]={1,1,2,2,2,3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }
    vector<int>p = sort_array(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
*/
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<vector<int>>sum(vector<int>&v){
    int n = v.size();
    sort(v.begin(),v.end()); // sort all element
    vector<vector<int>>p;

    for(int i=0;i<n;i++){ // akta verible constant thakba . ar baki gulo move korba
        if(i>0 && v[i]==v[i-1]) continue; // ata same element ala skip korba
        int left = i+1; // first iterative element
        int right = n-1; // last iterative element . 
        while(left<right){
            int sum = v[i]+v[left]+v[right];

            if(sum==0) {
                p.push_back({v[i],v[left],v[right]});

                while(left<right && v[left]==v[left+1]) left++; // same element ala aga agia jaba
                while(left<right && v[right]==v[right-1]) right--; // same element hola aga asa jaba
                left++;
                right--;// nahola to loop ghurla akta kore barba ar komba
            }
            else if(sum>0) right--;// amader choto sum dorkar
            else left++; // ata jakhn sum - chola asba amader baro sum dorkar 
        }
    }
return p;
    
}
int main(){
    int arr[]={-1,0,1,2,-1,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    vector<vector<int>>p = sum(v);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[0].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
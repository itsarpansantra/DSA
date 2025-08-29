// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0;i<=nums.size()-2;i++){
        for(int j=i+1;j<=nums.size()-1;j++){
            if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
    return {};
 }
 int main(){
    vector<int>v;
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int target;
    cout<<"Enter target: ";
    cin>>target;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p);
    }
    twoSum(v,target);
 }
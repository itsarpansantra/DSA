# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
    }
 void display(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
 }
 int main(){
    vector<int>v;
    int n;
    cout<<"Enter array size: "; // 5
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p); // 1,2,3,4,5
    }
    display(v);
    sortArray(v);
    display(v);
 }   

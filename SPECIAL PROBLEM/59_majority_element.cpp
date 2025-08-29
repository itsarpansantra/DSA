
/*Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2 */
 // basically jay element basi bar asba taka return korta hoba . ar seta n/2 r thaka basi asba

// another processes
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int majority(vector<int>&v){
    sort(v.begin(),v.end());
    return (v[(v.size()/2)]);
}
int main(){
    int arr []={2,2,1,1,1,2,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<majority(v);
}

/*Example 1:

Input: arr = [0,1,0]

Output: 1

Example 2:

Input: arr = [0,2,1,0]

Output: 1

Example 3:

Input: arr = [0,10,5,2]

Output: 1
*/
// amaka array doa thakaba tar peak element return korta hoba 
# include<iostream>
# include<vector>
using namespace std;
int peak(vector<int>&v){
    int n=v.size();
    int low=1; // first element konodin peak hoba na 
    int high=n-2; // last element konodin peak hoba na 
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]>v[mid-1]&&v[mid]>v[mid+1]) return mid;
        else if(v[mid]>v[mid+1]) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    vector<int>v;
    cout<<"Enter array element ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<< peak(v);
}

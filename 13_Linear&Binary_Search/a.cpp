# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int binary( vector<int>&v,int target){
  int i=0;
  int j= v.size()-1;
  while(i<=j){
    int mid=(i+j)/2;
    if(v[mid]==target) return mid;
    else if(v[mid]<target) i=mid-1;
    else j=mid+1;
  }
  return -1;
}
int main(){
  int n;
  cout<<"Enter array size: ";
  cin>>n;
  vector<int>v;
  cout<<"Enter array element: ";
  for(int i=0;i<n;i++){
    int q;
    cin>>q;
    v.push_back(q);
  }
  int target = 8;
 cout<< binary(v,target);
}
# include<iostream>
using namespace std;
# include<vector>
  void display(vector<int>&v , int index){
       if(index==v.size()) return ;
       cout<<v[index]<<" ";
       display(v,index+1); 
    }
int main(){
    int arr[]={4,5,8,6,2,3,5,56,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n);
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    display(v,0);
}
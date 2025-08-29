// arr[]={1,2,3} r subset print korta hoba  [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
# include<iostream>
# include<vector>
using namespace std;
void printSubset(int arr[],int n,int index,vector<int>ans){
    if(index==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
         return ;
    }
   
    printSubset(arr,n,index+1,ans);
    ans.push_back(arr[index]);
    printSubset(arr,n,index+1,ans);
}
int main(){
    int arr[] = {1,2,3};
    vector<int>v;
    int n = sizeof(arr)/sizeof(arr[0]);
    printSubset(arr,n,0,v);
}
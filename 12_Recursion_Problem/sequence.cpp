// print all increasing sequence of length k from first n natural number 
# include<iostream>
# include<vector>
# include<string>
using namespace std;
void subsequence(int arr[],int n, vector<int>v,int k,int index){
    if(index==n){
        if(v.size()==k){
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    if(v.size()+(n-index)<k)return ; // for better time complexcity
    subsequence(arr,n,v,k,index+1);
    v.push_back(arr[index]);
    subsequence(arr,n,v,k,index+1);
}
int main(){
    int arr[]={2,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    int k;
    cout<<"Enter k: ";
    cin>>k;
    subsequence(arr,n,v,k,0);
}
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
void rotateArr(vector<int>&v,int k){
    int x= v.size();
    k=k%x;
    if(k==0) return ;
    reverse(v.begin(),v.begin()+x-k);
    reverse(v.begin()+x-k,v.end());
    reverse(v.begin(),v.end());
}
int main(){
    int n;
    cout<<"Enter array size: "; // 5
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        v.push_back(p); // 1,2,3,4,5
    }
    int k;
    cout<<"Enter k: "; // if take 2
    cin>>k;
    rotateArr(v,k);
    // for(int i=0;i<n;i++){ // if you want to print 
    //     cout<<v[i]<<" ";
    // }
}
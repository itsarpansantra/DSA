# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"ENter n: ";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){ // input
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){ // output
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++){ // output
        cout<<v[i]<<" ";
    }
}
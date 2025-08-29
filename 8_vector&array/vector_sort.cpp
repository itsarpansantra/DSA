# include<iostream>
#include<vector>
# include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(10);
    v.push_back(5);
    v.push_back(9);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    // sort the value
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
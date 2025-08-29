// Input n strings and write a program to find the longest common prefix string all of string
# include<iostream>
# include<vector>
# include<algorithm>
# include<string>
using namespace std;
int main(){
    // vector<string>v;
    // v.push_back("flower");
    // v.push_back("flow");
    // v.push_back("flight");
    // int n=v.size();
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<endl;
    // }
    // cout<<endl;
    // sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<endl;
    // }
    // cout<<endl;
    // string first = v[0];
    // string last = v[n-1];
    // if(n==1) cout<< v[0];
    // string s="";
    // for(int i=0;i<min(first.size(),last.size());i++){
    //     if(first[i]==last[i]) s+=first[i];
    // }
    // cout<<s<<endl;
    vector<string>v;
    int n = v.size();
    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    string first = v[0];
    string last = v[n-1];
    if(n==1) cout<<v[0];
    string s =" ";
    for(int i=0;i<min(first.size(),last.size());i++){
     
        if(first[i]==last[i]) s+=first[i];
        
    }
 
    cout<<s;
}
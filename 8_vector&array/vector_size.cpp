# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    cout<<v.size()<<endl; // declare 1 by 1 size. size 1
    v.push_back(5);
    cout<<v.size()<<endl; // size 2
}
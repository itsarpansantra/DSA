# include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.at(2) = 85; // at works to modify the value
    cout<<v[2];
}
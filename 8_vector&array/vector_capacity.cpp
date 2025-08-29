# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);
    cout<<v.capacity()<<" "; // creat 1 dabba
    v.push_back(4);
    cout<<v.capacity()<<" "; // creat 2 dabba
    v.push_back(2);
    cout<<v.capacity()<<" "; //creat 2*2 dabba
    v.push_back(7);
    cout<<v.capacity()<<" "; // dont creat dabba . because alrady exist dabba
                             // next capacity hoba 4*4 = creat 8 dabba
}
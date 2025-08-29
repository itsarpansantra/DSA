# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v1; // {4,3,2}
    v1.push_back(4);
    v1.push_back(3);
    v1.push_back(2);

    vector<int>v2;  // {5,6}
    v2.push_back(5); 
    v2.push_back(6); 

    vector<int>v3; // {9,7,8,1}
    v3.push_back(9); 
    v3.push_back(7); 
    v3.push_back(8); 
    v3.push_back(1);

    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3); 
  
    cout<<v[2][3]<<endl;
}
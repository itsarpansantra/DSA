# include<iostream>
# include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(1);
    v.push_back(2);
    v.push_back(58);
    v.push_back(96);
    v.push_back(25);
    v.push_back(12);
    v.push_back(1);
    v.push_back(2);
    v.push_back(12);
    v.push_back(1);
    v.push_back(2);
    cout<<"size is: "<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity()<<endl;
    // pop back means array value decrease in last ;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
     cout<<"size is: "<<v.size()<<endl;
    cout<<"capacity is :"<<v.capacity();
}
# include<iostream>
# include<vector>
# include<queue>
using namespace std;
typedef pair<int,pair<int,int>>pip;
vector<int>smallest_range(vector<vector<int>>&v){
    priority_queue<int,vector<int> , greater<int>>pq;

}
int main(){
    vector<int>v1;
    v1.push_back(4);
    v1.push_back(10);
    v1.push_back(15);
    v1.push_back(24);
    v1.push_back(26);
    vector<int>v2;
    v2.push_back(0);
    v2.push_back(9);
    v2.push_back(12);
    v2.push_back(20);

    vector<int>v3;
    v3.push_back(5);
    v3.push_back(18);
    v3.push_back(22);
    v3.push_back(30);

    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    vector<int>p = smallest_range(v);
    for(int i=0;i<p.size();i++){
        cout<<p[i]<<" ";
    }
}
// akta array te kichu weight doa acha . say wight k jurla minimum cost kato hoba return kort hoba
# include<iostream>
# include<vector>
# include<queue>
# include<algorithm>
# include<unordered_map>
using namespace std;
int stone(vector<int>&v){
   int n = v.size();
    priority_queue<int,vector<int> ,greater<int> >pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
    }
    int cost =0;
    while(pq.size()>1){
        int x = pq.top();
        pq.pop();
        int y  = pq.top();
        pq.pop();
        int rope = x+y;
        cost+=rope;
        pq.push(rope);
    }
    return cost;
}    
int main(){
    int arr[] = {2,7,4,1,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(n); 
    for(int i=0;i<n;i++){
        v[i]=arr[i];
    }
    cout<<stone(v);
}
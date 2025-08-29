/*
Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).

The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).

You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in).


Input: points = [[1,3],[-2,2]], k = 1
Output: [[-2,2]]
Explanation:
The distance between (1, 3) and the origin is sqrt(10).
The distance between (-2, 2) and the origin is sqrt(8).
Since sqrt(8) < sqrt(10), (-2, 2) is closer to the origin.
We only want the closest k = 1 points from the origin, so the answer is just [[-2,2]].

*/
# include<iostream>
# include<vector>
# include<queue>
# include<algorithm>
# include<unordered_map>
using namespace std;
typedef pair<int, vector<int>>p;
vector<vector<int>>closest(vector<vector<int>>&v,int k ){
    int n = v.size();
    priority_queue< p > pq;
    for(vector<int>arr :v){ 
        int x = arr[0];
        int y = arr[1];
        int dis = x*x + y*y;
        pq.push({dis,arr}); // distace ar oi vector 
        if(pq.size()>k) pq.pop(); 
    }
    vector<vector<int>>ans;
    while(pq.size()>0){
        vector<int>v  = pq.top().second; // ami oi vector pair ta k nebo jar origin thaka distance kom
        ans.push_back(v); 
        pq.pop();
    }
    return ans;
}
int main(){
    vector<int>v1;
    v1.push_back(3);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(5);
    v2.push_back(-1);
    vector<int>v3;
    v3.push_back(-2);
    v3.push_back(4);

    vector<vector<int>>v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    int k =2;

    vector<vector<int>>p = closest(v,k);
    for(int i=0;i<p.size();i++){
        for(int j=0;j<p[0].size();j++){
            cout<<p[i][j]<<" ";
        }
        cout<<endl;
    }
}
# include<iostream>
# include<queue>
using namespace std;
int main(){
    priority_queue<int>pq;
    pq.push(25);
    pq.push(35);
    pq.push(45);
    pq.push(5);
    pq.push(15);
    cout<<pq.top()<<endl; // basically amar pq r vator ja baro element acha seta access korta parba
    pq.pop();
    cout<<pq.top()<<endl; 
}
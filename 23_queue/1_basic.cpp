# include<iostream>
# include<queue>
using namespace std;
void display(queue<int>q){
    int n = q.size(); // queue r size store korlam 
    for(int i=1;i<=n;i++){
        int x = q.front(); // all time front of queue bar korbo
        cout<<x<<" "; // dia print korbo
        q.pop(); // bar kore dabo queue thaka
        q.push(x); // dia oi queue ta push kore dabo 
    }
    cout<<endl;
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
}
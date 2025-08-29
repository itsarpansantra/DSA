// remove all the element present at even position of the queue . consider 0 based index
# include<iostream>
# include<queue>
using namespace std;
void display(queue<int>&q){
    int n = q.size(); // queue r size print korlam 
    for(int i=1;i<=n;i++){
        int x = q.front(); // all time front of queue bar korbo
        cout<<x<<" "; // dia print korbo
        q.pop(); // bar kore dabo queue thaka
        q.push(x); // dia oi queue ta push kore dabo 
    }
    cout<<endl;
}
void removeAtEven(queue<int>&q){
    int n =q.size();
    for(int i=0;i<n;i++){
        if(i%2==0) q.pop(); // remove even index element
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    removeAtEven(q);
    display(q);
}
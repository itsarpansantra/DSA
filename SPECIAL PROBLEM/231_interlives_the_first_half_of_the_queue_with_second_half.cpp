/*
Given a queue q[] of even size. Your task is to rearrange the queue by interleaving its first half with the second half.

Interleaving is the process of mixing two sequences by alternating their elements while preserving their relative order.
In other words, Interleaving means place the first element from the first half and then first element from the 2nd half and again second element from the first half and then second element from the 2nd half and so on....

Examples:

Input: q[] = [2, 4, 3, 1]
Output: [2, 3, 4, 1]
Explanation: We place the first element of the first half 2 and after that 
place the first element of second half 3 and after that repeat
the same process one more time so the resulting queue will be [2, 3, 4, 1]
Input: q[] = [3, 5]
Output: [3, 5]
Explanation: We place the first element of the first half 3 and first element
of the second half 5 so the resulting queue is [3, 5]
*/
# include<iostream>
# include<queue>
using namespace std;
void interlives(queue<int>&q){
    int n = q.size();
    int k = n/2;//for interlives 
    queue<int>q2;
    // elements push first half on q2 
    for(int i=0;i<k;i++){
        q2.push(q.front());
        q.pop();
    }
    // again element push on q 
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
        // again q to push q and pop
        q.push(q.front());
        q.pop();
    }
}
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
    q.push(2);
    q.push(4);
    q.push(3);
    q.push(1);
    display(q);
    interlives(q);
    display(q);
}
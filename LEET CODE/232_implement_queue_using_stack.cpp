/*
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).

Implement the MyQueue class:

void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:

You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 

Example 1:

Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]

Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
 
*/
# include<iostream>
# include<stack>
# include<queue>
using namespace std;
// pop and peek efficient approach
class MyQueue{
public:
    stack<int>st;
    stack<int>helper;
    MyQueue(){

    } 
    void push(int x){ // O(n)
        // push at bottom
        if(st.size()==0) {
            st.push(x);
            return ;
        }
        else{ // stack thaka helper sab element transfer korlama . stack push korlam . taarpor helper thaka stack push kore dilam
            while(st.size()>0){
                helper.push(st.top());
                st.pop();
            }
            st.push(x);
            while(helper.size()>0){
                st.push(helper.top());
                helper.pop();
            }
        }
    }
    int pop(){ //O(1)
        int x = st.top();
        st.pop();
        return x;
    }
    int peek(){ // retrive at bottom //front O(1)
        return st.top();
    }
    bool isEmpty(){
        if(st.size()==0) return true;
        else return false;
    }
};
int main(){
    MyQueue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    cout<<q.peek()<<" "<<endl;
}
// this is push efficient approach .
// class MyQueue{
// public:
//     stack<int>st;
//     stack<int>helper;
//     MyQueue(){

//     } 
//     void push(int x){ // O(1)
//         st.push(x) ;// stack push hochha mana queue te push hochha 
//     }
//     int pop(){ //O(n)
//         // basically remove of bottom of stacks 
//         while(st.size()>0){
//             helper.push(st.top());
//             st.pop();
//         }
//         int x = helper.top(); // ata amaka return korta hoba
//         helper.pop(); // jai eleent pop korbo helper top thaka udia dibo 
//         // dia abar stack ghure push korbo
//         while(helper.size()>0){
//             st.push(helper.top());
//             helper.pop();
//         }
//         return x;
//     }
//     int peek(){ // retrive at bottom //front O(n)
//          while(st.size()>0){
//             helper.push(st.top());
//             st.pop();
//         }
//         int x = helper.top(); // ata amaka return korta hoba
//         // dia abar stack ghure push korbo
//         while(helper.size()>0){
//             st.push(helper.top());
//             helper.pop();
//         }
//         return x;
//     }
//     bool isEmpty(){
//         if(st.size()==0) return true;
//         else return false;
//     }
// };
// int main(){
//     MyQueue q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.pop();
//     cout<<q.peek()<<" "<<endl;
// }
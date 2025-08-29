/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

Input
["MinStack","push","push","push","getMin","pop","top","getMin"]
[[],[-2],[0],[-3],[],[],[],[]]

Output
[null,null,null,null,-3,null,0,-2]

Explanation
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); // return -3
minStack.pop();
minStack.top();    // return 0
minStack.getMin(); // return -2
 
*/

//method 2

# include<iostream>
# include<stack>
# include<climits>
using namespace std;
class Stack{ //user defined datastracture
public:
   stack<long long>st;
    long long min;
    Stack(){
        min = LLONG_MAX;
    }
    void push(int val){
        long long x = (long long) val;
        if(st.size()==0){
            st.push(x);
            min =x;
        }
       else if(x>=min )st.push(x);
        else{
            // val<min
            // farzi number push korbo 
            st.push(2*x-min);
            min =x;
        }
    }
    // push , pop jakhn hoba 2 to thaka hoba 
    void pop(){
     if(st.top()>=min) st.pop(); //   
     else{ // st.top()<min : a fake value is present
        // before poping make sure old minimum 
        long long old_min = 2*min - st.top();
        min = old_min;
        st.pop();
     }
    }
    int top(){
       if(st.top()<min) return (int)min ;
       else return (int)st.top();
    }
    int get_Min(){
       return (int)min;
    }
};
int main(){
    Stack st;
    st.push(7);
    st.push(8);
    st.push(6);
    st.push(5);
    st.push(3);
    st.push(4);
    cout<<st.get_Min()<<endl;
    //st.display();
}
// //method 2

// # include<iostream>
// # include<stack>
// # include<vector>
// using namespace std;
// class Stack{ //user defined datastracture
// public:
//    vector<int>v;
//     Stack(){

//     }
//     void push(int val){
//         v.push_back(val);
//     }
//     // push , pop jakhn hoba 2 to thaka hoba 
//     void pop(){
//      v.pop_back();   
//     }
//     int top(){
//        return v[v.size()-1];
//     }
//     int get_Min(){
//        int mn = v[0];
//        for(int i=1;i<v.size();i++){
//         mn = min(mn,v[i]);
//        }
//        return mn;
//     }
// };
// int main(){
//     Stack st;
//     st.push(7);
//     st.push(8);
//     st.push(6);
//     st.push(5);
//     st.push(3);
//     st.push(4);
//     cout<<st.get_Min()<<endl;
//     //st.display();
// }

//method 1

// # include<iostream>
// # include<stack>
// using namespace std;
// class Stack{ //user defined datastracture
// public:
//     stack<int>st;
//     stack<int>gt;// helper stack 
//     Stack(){

//     }
//     void push(int val){
//         st.push(val);
//         if(gt.size()==0 || gt.top()>val){
//             gt.push(val);
//         }
//         else gt.push(gt.top());
//     }
//     // push , pop jakhn hoba 2 to thaka hoba 
//     void pop(){
//      st.pop();
//      gt.pop();   
//     }
//     int top(){
//        return st.top();
//     }
//     int get_Min(){
//         return gt.top();
//     }
// };
// int main(){
//     Stack st;
//     st.push(7);
//     st.push(8);
//     st.push(6);
//     st.push(5);
//     st.push(3);
//     st.push(4);
//     cout<<st.get_Min()<<endl;
//     //st.display();
// }
/*
Design a stack-like data structure to push elements to the stack and pop the most frequent element from the stack.

Implement the FreqStack class:

FreqStack() constructs an empty frequency stack.
void push(int val) pushes an integer val onto the top of the stack.
int pop() removes and returns the most frequent element in the stack.
If there is a tie for the most frequent element, the element closest to the stack's top is removed and returned.
 

Example 1:

Input
["FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop", "pop"]
[[], [5], [7], [5], [7], [4], [5], [], [], [], []]
Output
[null, null, null, null, null, null, null, 5, 7, 5, 4]

Explanation
FreqStack freqStack = new FreqStack();
freqStack.push(5); // The stack is [5]
freqStack.push(7); // The stack is [5,7]
freqStack.push(5); // The stack is [5,7,5]
freqStack.push(7); // The stack is [5,7,5,7]
freqStack.push(4); // The stack is [5,7,5,7,4]
freqStack.push(5); // The stack is [5,7,5,7,4,5]
freqStack.pop();   // return 5, as 5 is the most frequent. The stack becomes [5,7,5,7,4].
freqStack.pop();   // return 7, as 5 and 7 is the most frequent, but 7 is closest to the top. The stack becomes [5,7,5,4].
freqStack.pop();   // return 5, as 5 is the most frequent. The stack becomes [5,7,4].
freqStack.pop();   // return 4, as 4, 5 and 7 is the most frequent, but 4 is closest to the top. The stack becomes [5,7].
*/
# include<bits/stdc++.h>
using namespace std;
class frequency_stack{
    public:
    unordered_map<int,int>mp; // value -> frequency
    unordered_map<int,stack<int>>group; // freq -> stack of values
    int maxfreq;
    frequency_stack(){
        maxfreq = 0;
    }
    void push(int val){
        int f = ++mp[val]; //increase frequency
        maxfreq = max(maxfreq,f); // update max frequency
        group[f].push(val); //  push into corresponding stack
    }
    int pop(){
        int val = group[maxfreq].top();
        group[maxfreq].pop();
        mp[val]--;
        if (group[maxfreq].empty()) {
            maxfreq--;                // reduce maxFreq if no elements left
        }
        return val;
    }
}
int main(){
    FreqStack freqStack;

    // Example operations
    freqStack.push(5);
    freqStack.push(7);
    freqStack.push(5);
    freqStack.push(7);
    freqStack.push(4);
    freqStack.push(5);

    cout << freqStack.pop() << endl; // 5
    cout << freqStack.pop() << endl; // 7
    cout << freqStack.pop() << endl; // 5
    cout << freqStack.pop() << endl; // 4

    return 0;
}
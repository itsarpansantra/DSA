/*
You are given an array of a fixed size. Your task is to efficiently implement two stacks in this single array.

The following operations must be supported:

(i) twoStacks : Initialize the data structures and variables to be used to implement  2 stacks in one array.
(ii) push1(x) : pushes element into the first stack.
(iii) push2(x) : pushes element into the second stack.
(iv) pop1() : pops an element from the first stack and returns the popped element. If the first stack is empty, it should return -1.
(v) pop2() : pops an element from the second stack and returns the popped element. If the second stack is empty, it should return -1.

Examples:

Input:
push1(2)
push1(3)
push2(4)
pop1()
pop2()
pop2()
Output: [3, 4, -1]
Explanation: 
push1(2): the stack1 will be [2]
push1(3): the stack1 will be [2,3]
push2(4): the stack2 will be [4]
pop1(): the poped element will be 3 from stack1 and stack1 will be {2}
pop2(): the poped element will be 4 from stack2 and now stack2 is empty
pop2(): the stack2 is now empty hence returned -1.
Input:
push1(1)
push2(2)
pop1()
push1(3)
pop1()
pop1()
Output: [1, 3, -1]
Explanation:
push1(1): the stack1 will be [1]
push2(2): the stack2 will be [2]
pop1(): the poped element will be 1 from stack1 and stack1 will be empty
push1(3): the stack1 will be [3]
pop1(): the poped element will be 3 from stack1 and stack1 will be empty
pop1(): the stack1 is now empty hence returned -1.
Input:
push1(2)
push1(3)
push1(4)
pop2()
pop2()
pop2()
Output: [-1, -1, -1]
Explanation:
push1(2): the stack1 will be [2]
push1(3): the stack1 will be [2,3]
push1(4): the stack1 will be [2,3,4]
pop2(): the stack2 is empty hence returned -1.
pop2(): the stack2 is empty hence returned -1.
pop2(): the stack2 is empty hence returned -1.
*/
#include <iostream>
using namespace std;

class twoStacks {
    int *arr;
    int size;
    int top1, top2;

public:
    // Constructor
    twoStacks(int n) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    // Push into stack1
    void push1(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top1] = x;
    }

    // Push into stack2
    void push2(int x) {
        if (top1 + 1 == top2) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[--top2] = x;
    }

    // Pop from stack1
    int pop1() {
        if (top1 < 0)
            return -1;
        return arr[top1--];
    }

    // Pop from stack2
    int pop2() {
        if (top2 >= size)
            return -1;
        return arr[top2++];
    }

    // Destructor
    ~twoStacks() {
        delete[] arr;
    }
};

int main() {
    twoStacks ts(5);  // Array size = 5

    ts.push1(2);
    ts.push1(3);
    ts.push2(4);

    cout << ts.pop1() << endl;  // 3
    cout << ts.pop2() << endl;  // 4
    cout << ts.pop2() << endl;  // -1

    return 0;
}
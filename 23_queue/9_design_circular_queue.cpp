// remove all the element present at even position of the queue . consider 0 based index
/*
Design your implementation of the circular queue. The circular queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle, and the last position is connected back to the first position to make a circle. It is also called "Ring Buffer".

One of the benefits of the circular queue is that we can make use of the spaces in front of the queue. In a normal queue, once the queue becomes full, we cannot insert the next element even if there is a space in front of the queue. But using the circular queue, we can use the space to store new values.

Implement the MyCircularQueue class:

MyCircularQueue(k) Initializes the object with the size of the queue to be k.
int Front() Gets the front item from the queue. If the queue is empty, return -1.
int Rear() Gets the last item from the queue. If the queue is empty, return -1.
boolean enQueue(int value) Inserts an element into the circular queue. Return true if the operation is successful.
boolean deQueue() Deletes an element from the circular queue. Return true if the operation is successful.
boolean isEmpty() Checks whether the circular queue is empty or not.
boolean isFull() Checks whether the circular queue is full or not.
You must solve the problem without using the built-in queue data structure in your programming language. 

Example 1:

Input
["MyCircularQueue", "enQueue", "enQueue", "enQueue", "enQueue", "Rear", "isFull", "deQueue", "enQueue", "Rear"]
[[3], [1], [2], [3], [4], [], [], [], [4], []]
Output
[null, true, true, true, false, 3, true, true, true, 4]

Explanation
MyCircularQueue myCircularQueue = new MyCircularQueue(3);
myCircularQueue.enQueue(1); // return True
myCircularQueue.enQueue(2); // return True
myCircularQueue.enQueue(3); // return True
myCircularQueue.enQueue(4); // return False
myCircularQueue.Rear();     // return 3
myCircularQueue.isFull();   // return True
myCircularQueue.deQueue();  // return True
myCircularQueue.enQueue(4); // return True
myCircularQueue.Rear();     // return 4
*/
# include<iostream>
# include<vector>
using namespace std;
class MYCircularQueue{
public:
    int f;//front
    int b;//back // rear
    int s ; // say current size of queue
    int c ; // capacity of queue 
    vector<int>arr; // array r jaygay vector create kore dilam
    MYCircularQueue(int k){ // k =val 
        f = 0;
        b = 0;
        s = 0;
        c = k; // capacity asala k . jata input asba . mana array r size 
        vector<int>v(k);
        arr=v;
    }
    bool enQueue(int val){ // push back
        if(s==c) return false; // jodi array size ar capacity same hoye jay takhn
        arr[b]=val;
        b++;
        if(b==c) b=0; // b jodi capacity saman hoye jay . mana ba ar c jodi array last index thaka 
        // ar array r ager dika jayga faka thaka to b k aga nia chola asbo . element push korer janno
        s++;
        return true;
    }
    bool DeQueue(){ // pop Front 
        if(s==0) return false;
        f++;
        if(f==c) f=0; // f jodi array thaka baria jay taka abar start nia asta hoba
        s--;
        return true;
    }
    int front(){
        if(s==0) return -1;
        return arr[f];
    }
    int back(){ // rear
        if(s==0) return -1;
        if(b==0) return arr[c-1];
        return arr[b-1]; // karon b array er baira baria jay
    }
    int size(){
        return s;
    }
    bool empty(){
        if(s==0) return true;
        else return false;
    }
    bool isFull(){
        if(s==c) return true;
        else return false;
    }
    void display(){
        for(int i=f;i<b;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    MYCircularQueue q(5);// 5 ta hochha size 
    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.display();
    q.enQueue(40);
    q.enQueue(50);
    q.display();
    q.DeQueue();
    q.display();
}
/*
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.

For example, for arr = [2,3,4], the median is 3.
For example, for arr = [2,3], the median is (2 + 3) / 2 = 2.5.
Implement the MedianFinder class:

MedianFinder() initializes the MedianFinder object.
void addNum(int num) adds the integer num from the data stream to the data structure.
double findMedian() returns the median of all elements so far. Answers within 10-5 of the actual answer will be accepted.
 

Example 1:

Input
["MedianFinder", "addNum", "addNum", "findMedian", "addNum", "findMedian"]
[[], [1], [2], [], [3], []]
Output
[null, null, null, 1.5, null, 2.0]

Explanation
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);    // arr = [1]
medianFinder.addNum(2);    // arr = [1, 2]
medianFinder.findMedian(); // return 1.5 (i.e., (1 + 2) / 2)
medianFinder.addNum(3);    // arr[1, 2, 3]
medianFinder.findMedian(); // return 2.0
*/
# include<iostream>
# include<queue>
using namespace std;
class Median{
    public:
    priority_queue<int>left; // maxheaap
    priority_queue<int,vector<int>,greater<int>> right; // minheap
    void addnum(int val){
        if(left.size()==0 || val<left.top()) left.push(val); // jodi maxheap kichu value na thaka ba jay value asba say value ta jodi left top r thaka choto hoy takhn push hoba
        else right.push(val); // jay value ta asba right r top er thaka baro hoy takhn insert hoba  .. maxheap ata

        if(left.size()>right.size()+1){ // jodi minheap er element baro hoy ar maxheap r choto hoy tahola akta change kore debo
            right.push(left.top()); // left thaka right akta element transfer korlam
            left.pop(); //  left r top thaka uria dilam
        }
        if(right.size()>left.size()+1){
            left.push(right.top());
            right.pop();
        }
    }
    double findMedian(){
        if(left.size()==right.size()) return (left.top()+right.top())/2.0;
        else{
            if(left.size()>right.size()) return left.top();
            else return right.top();
        }
    }
};
int main(){
    Median m;
    m.addnum(6);
    m.addnum(1);
    m.addnum(2);
    m.addnum(4);
    m.addnum(2);
    m.addnum(1);
    m.addnum(3);
    m.addnum(8);
    m.addnum(1);
    cout<<m.findMedian()<<endl;
}
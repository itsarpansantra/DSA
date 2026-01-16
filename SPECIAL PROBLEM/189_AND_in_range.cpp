/*
You are given two integers l and r. Find the result after applying the series of Bitwise AND ( & ) operation on every natural number between the range l to r (including both).

Examples:

Input: l = 8, r = 13
Output: 8
Explanation: 
8 AND 9 AND 10 AND 11 AND 12 AND 13 = 8.
Input: l = 2, r = 3
Output: 2
Explanation: 2 AND 3 = 2.
*/

# include<iostream>
using namespace std;
 int andInRange(int l, int r) {
    int shift = 0;
    while (l < r) {// Keep shifting until both numbers become equal
        l >>= 1;
        r >>= 1;
        shift++;
    }
    
    return l << shift;// restore the common prefix
}

int main(){
    int l,r;
    cout<<"Enter l: ";
    cin>>l;
    cout<<"Enter r: ";
    cin>>r;
    cout<<andInRange(l,r);
}
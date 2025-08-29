// calculate the minimum number of bits of flip to convert one  to another 
// ex 5 can be written as 0101 output 
// 11 can be written as   1011 . so much bits flips required is 3
// 0 change 1 . flip count . 1 chnage 0 flip count 2 . again 0 to 1 count 3 
// but last bit both are same we dont count . output -> 3
// jakhana jahkhana bit different count korta hoba sekhana

# include<iostream>
using namespace std;
int main(){
    int x =23;
    int y = 32;
    cout<<__builtin_popcount(x^y);
}

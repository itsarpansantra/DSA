/*
Reverse bits of a given 32 bits signed integer.

 

Example 1:

Input: n = 43261596

Output: 964176192

Explanation:

Integer	Binary
43261596	00000010100101000001111010011100
964176192	00111001011110000010100101000000
Example 2:

Input: n = 2147483644

Output: 1073741822

Explanation:

Integer	Binary
2147483644	01111111111111111111111111111100
1073741822	00111111111111111111111111111110

*/
# include<iostream>
using namespace std;
int reverse_bits(int n){
    unsigned int ans = 0;
    for(int i = 0; i < 32; i++) {
        ans <<= 1;        // make space
        ans |= (n & 1);   // take last bit
        n >>= 1;          // move to next bit
    }
    return ans;
}
int main(){
    int n = 2147483644;
    cout<<reverse_bits(n);
}
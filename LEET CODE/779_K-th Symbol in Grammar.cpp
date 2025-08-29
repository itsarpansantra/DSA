/* We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

 

Example 1:

Input: n = 1, k = 1
Output: 0
Explanation: row 1: 0
Example 2:

Input: n = 2, k = 1
Output: 0
Explanation: 
row 1: 0
row 2: 01
*/

# include<iostream>
using namespace std;
int kth_grammar(int n , int k){
    if(n==1) return 0;
    // odd one =1;
    //odd zero=0;
    // even one = 0;
    // even zero=1;
    //0->01
    //1->10
    if(k%2==0){ // fliping // even
        int prevans= kth_grammar(n-1,k/2);
        if(prevans==0) return 1;
        else return 0;
    }
    else {//odd 
        int prevans= kth_grammar(n-1,k/2+1);
        return prevans;
    }
}
int main(){
    int n=4;
    int k=7;
    cout<< kth_grammar(n,k);
}

//leet code

class Solution {
    public:
        int kthGrammar(int n, int k) {
            if(n==1) return 0;
            if(k%2==0){
                int prevAns=kthGrammar(n-1,k/2);
                if(prevAns==0) return 1;
                else return 0;
            }
            else {
                return kthGrammar(n-1,k/2+1);
            }
        }
    };
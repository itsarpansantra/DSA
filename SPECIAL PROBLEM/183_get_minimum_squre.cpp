/*
Given a positive integer n, find the minimum number of perfect squares (square of an integer) that sum up to n.

Note: Every positive integer can be expressed as a sum of square numbers since 1 is a perfect square, and any number can be represented as 1*1 + 1*1 + 1*1 + ....

Examples:

Input: n = 100
Output: 1
Explanation: 10 * 10 = 100

Input: n = 6
Output: 3
Explanation = 1 * 1 + 1 * 1 + 2 * 2 = 6 
*/
# include<iostream>
# include<cmath>
using namespace std;
bool perfectSqure(int n){
    int root = sqrt(n);
    if(root*root == n) return true;
    else return false;
}
int correct(int n){
  if (perfectSqure(n))
        return 1;

    // Case 2: sum of two perfect squares
    for (int i = 1; i * i <= n; i++) {
        if (perfectSqure(n - i * i))
            return 2;
    }

    // Case 3: remove powers of 4
    int m = n;
    while (m % 4 == 0)
        m /= 4;

    // Case 4: check Legendre’s condition
    if (m % 8 == 7)
        return 4;

    // Case 5: otherwise, 3 squares are enough
    return 3;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<correct(n);
}
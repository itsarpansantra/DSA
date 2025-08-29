//A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.

//Given an integer n, return true if n is a perfect number, otherwise return false.

// Input: num = 28
// Output: true
// Explanation: 28 = 1 + 2 + 4 + 7 + 14
// 1, 2, 4, 7, and 14 are all divisors of 28.

// mana 28 k vag korla vagfall ja baroba . segulo k jog korla jodi 28 hoy taba seta perfect number


# include<iostream>
# include<cmath>
using namespace std;
bool perfect(int n){
    int sum =0;
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0) sum+=i;
    }
    for(int i=sqrt(n);i>=1;i--){
        if(n%i==0) sum+=n/i;
    }
    sum-=n;
    // if (sum==n) return true;
    // else return false;
    return (sum==n);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<perfect(n);
}

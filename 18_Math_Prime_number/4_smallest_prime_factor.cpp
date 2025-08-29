// smallest value after replacing with sum of prime number.
// Input: n = 15
// Output: 5
// Explanation: Initially, n = 15.
// 15 = 3 * 5, so replace n with 3 + 5 = 8. // 3 or 5 are prime nuber
// 8 = 2 * 2 * 2, so replace n with 2 + 2 + 2 = 6.
// 6 = 2 * 3, so replace n with 2 + 3 = 5.
// 5 is the smallest value n will take on.

# include<iostream>
# include<vector>
# include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
} 
int smallest_value(int n){
    if(isprime(n)) return n; // jodi n prime number . to oitai sob thaka choto value

    int sum =0;
    for(int i=1;i<sqrt(n);i++){ //squre root left part  T.C = O(sqrt(n))
        if(n%i==0 && isprime(i)){ // n%i ==0 means factor of n . 
            int m =n; // let n = 8 . m=8 
            while(m%i==0){ // 8%2==0 yes i=2 dharchi  .. t.c = O(log(m)base i)
                sum+=i; // sum+=2
                m/=i; // m=8/2 = 4 . abar check hoba 
            }

        }
    }
    for(int i=sqrt(n);i>=1;i--){ // sqrt right part
        if(n%i==0 && isprime((n/i))){
            int m = n;
            while(m%(n/i)==0){
                sum+=(n/i);
                m/=(n/i);
            }
        }
    }
    if(sum==n) return n; // ata 4 chara anno kono number nay 
    return smallest_value(sum);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<smallest_value(n);
}

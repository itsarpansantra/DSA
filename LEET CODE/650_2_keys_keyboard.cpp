// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

// Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.

// Example 1:

// Input: n = 3
// Output: 3
// Explanation: Initially, we have one character 'A'.
// In step 1, we use Copy All operation.
// In step 2, we use Paste operation to get 'AA'.
// In step 3, we use Paste operation to get 'AAA'.


# include<iostream>
# include<cmath>
using namespace std;
bool isprime(int n){
    if(n==1) return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}
int gd(int n){
    for(int i=2;i<=sqrt(n);i++){
        //sqrt(60)=7 
        if(n%i==0) return n/i;
        // 60%2 = 0 return 60/2 = 30 ai tai hf 
    }
    return 1;
}
int operation(int n){
    int count=0;
    while(n>1){ // n=60
        if(isprime(n)){ // jadi number prime number hoy
            count+=n;// tatogulo number jog hoba 
            break;
        }
        int hf = gd(n); // hf = highest factor . gd = greatest comon divisior
        // hf = gd(60) = 30;
        count+=(n/hf); // count+= 60/30 = 2
        n =hf; // n=60 chilo to taka 30 kore dia abar loop run korbo 

    }
    return count;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<operation(n);
}
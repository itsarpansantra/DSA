// in built function

// set bit mana kato gulo 1 acha . 

# include<iostream>
using namespace std;
int bit(int n){
    return __builtin_popcount(n);
}
// code 
int count_set_bits(int n){
    int count =0;
    while(n>0){
        count++;
        n= n&(n-1);
    }
    return count;
}
int main(){
    cout<<bit(13)<<endl;
    cout<<count_set_bits(13);
}
// Enter a number .if number is one digit return 1. if number two digit return 2*2=4.
# include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int countDigit(int num){
 int ans=0;
    while(num>0){
     ans++;
        num=num/10;
    }
  return ans;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int NoOfDigit= countDigit(num);
    cout<<square(NoOfDigit)<<endl;
}